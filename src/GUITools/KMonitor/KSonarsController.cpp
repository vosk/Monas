#include "KSonarsController.h"
#include "ui_KSonarsController.h"
#include "KMapScene.h"

KSonarsController::KSonarsController (QWidget *parent) :
	QWidget (parent),
	ui (new Ui::KSonarsController) {
	ui->setupUi (this);
	availableSonarsHosts = new HostsComboBox (ui->SonarComboBox);
	connect (availableSonarsHosts, SIGNAL (SubscriptionRequest (QString) ), this, SLOT (SubscriptionHandler (QString) ) );
	un_checkAllTreeElements (Qt::Unchecked);
	connect (ui->checkTree, SIGNAL (itemChanged (QTreeWidgetItem *, int) ), this, SLOT (newTreeElementRequested (QTreeWidgetItem *) ) );
	mapArea = new KMapScene (ui->graphicsView);
	ui->graphicsView->setScene (mapArea);
	ui->graphicsView->setResizeAnchor (QGraphicsView::AnchorViewCenter);
	ui->graphicsView->setTransformationAnchor (QGraphicsView::AnchorViewCenter);
	mapArea->resetKMapScene();

	if (ui->graphicsView->width() > ui->graphicsView->height() ) {
		mapArea->resizeMapScene (ui->graphicsView->height() - 10);
	} else {
		mapArea->resizeMapScene (ui->graphicsView->width() - 10);
	}
}

KSonarsController::~KSonarsController() {
	delete ui;
}


void KSonarsController::newTreeElementRequested (QTreeWidgetItem *item) {
	if (ui->checkTree->itemAt (0, 0)->indexOfChild (item) == 0 ) {
		if (item->checkState (0) == 0) {
			mapArea->setLPMObstaclesVisible (false);
		} else {
			mapArea->setLPMObstaclesVisible (true);
		}
	} else if (ui->checkTree->itemAt (0, 0)->indexOfChild (item) == 1) {
		if (item->checkState (0) == 0) {
			mapArea->setLPMPathVisible (false);
		} else {
			mapArea->setLPMPathVisible (true);
		}
	} else if (ui->checkTree->itemAt (0, 0)->indexOfChild (item) == 2 ) {
		if (item->checkState (0) == 0) {
			mapArea->setLPMTargetCoordVisible (false);
		} else {
			mapArea->setLPMTargetCoordVisible (true);
		}
	} else {
		if (item->checkState (0) == 0) {
			un_checkAllTreeElements (Qt::Unchecked);
		} else {
			un_checkAllTreeElements (Qt::Checked);
		}
	}
}

void KSonarsController::un_checkAllTreeElements (Qt::CheckState state) {
	QTreeWidgetItem *item;

	for (int i = 0; i < ui->checkTree->itemAt (0, 0)->childCount(); i++) {
		item = ui->checkTree->itemAt (0, 0)->child (i);
		item->setCheckState (0, state);
	}

	ui->checkTree->itemAt (0, 0)->setCheckState (0, state);
}

void KSonarsController::resizeEvent (QResizeEvent *event) {
	if (ui->graphicsView->width() > ui->graphicsView->height() ) {
		mapArea->resizeMapScene (ui->graphicsView->height() - 10);
	} else {
		mapArea->resizeMapScene (ui->graphicsView->width() - 10);
	}
}

void KSonarsController::gridInfoUpdateHandler (GridInfo gim, QString hostId) {
	for (int ring = 0; ring < TotalRings; ring++) {
		for (int sector = 0; sector < N; sector++) {
			mapArea->PolarGrid[0][ring][sector] = gim.gridcells (ring * N + sector);
		}
	}

	mapArea->targetX = gim.targetcoordinates (0);
	mapArea->targetY = gim.targetcoordinates (1);
	mapArea->targetA = gim.targetcoordinates (2);

	for (int step = 0; step < PathLength; step++) {
		mapArea->pathR[step] = gim.pathstepsring (step);
		mapArea->pathS[step] = gim.pathstepssector (step);
		mapArea->pathO[step] = gim.pathstepsorientation (step);
	}

	if (mapArea->getLPMObstaclesVisible() ) {
		mapArea->setPMObstaclesVisible (false);
		mapArea->updateObstacles (false);
		mapArea->updateArrow();
		mapArea->setPMObstaclesVisible (true);
	}

	if (mapArea->getLPMTargetCoordVisible() ) {
		mapArea->setPMTargetCoordVisible (false);
		mapArea->updateTargetCoordinates();
		mapArea->setPMTargetCoordVisible (true);
	}

	if (mapArea->getLPMPathVisible() ) {
		mapArea->setPMPathVisible (false);
		mapArea->updatePath();
		mapArea->setPMPathVisible (true);
	}
}

void KSonarsController::changeToHost (QString data1) {
	availableSonarsHosts->changeItem (data1);
}

void KSonarsController::addComboBoxItem (QString data1, QString data2) {
	availableSonarsHosts->addComboBoxItem (data1, data2);
}

void KSonarsController::removeComboBoxItem (QString data1) {
	availableSonarsHosts->removeComboBoxItem (data1);
}

void KSonarsController::setGameStateInfo (QString data1, QString data2, QString data3) {
	availableSonarsHosts->setGameStateInfo (data1, data2, data3);
}

void KSonarsController::SubscriptionHandler (QString data1) {
	un_checkAllTreeElements (Qt::Unchecked);
	mapArea->resetKMapScene();
	emit SubscriptionRequest (data1);
}

void KSonarsController::changeEvent (QEvent *e) {
	QWidget::changeEvent (e);

	switch (e->type() ) {
	case QEvent::LanguageChange:
		ui->retranslateUi (this);
		break;
	default:
		break;
	}
}
