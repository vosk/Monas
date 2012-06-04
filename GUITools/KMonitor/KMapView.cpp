#include "KMapView.h"
#include "KMapScene.h"

#include <iostream>
using namespace std;

KMapView::KMapView(QWidget* parent)
    : QGraphicsView(parent)
    , mapArea(0)
{
	this->mapArea = new KMapScene(this, "");
	this->setScene(mapArea);
	this->setResizeAnchor(QGraphicsView::AnchorViewCenter);
	this->setTransformationAnchor(QGraphicsView::AnchorViewCenter);

}

KMapView::~KMapView()
{
}

void KMapView::resetRobotMap(QString hostId)
{
	if (mapArea->getCurrentHost() == hostId)
		mapArea->resetKMapScene("");
}

void KMapView::resizeEvent(QResizeEvent* event)
{
	if (width()>height())
		mapArea->resizeMapScene(height()-10);
	else
		mapArea->resizeMapScene(width()-10);

	QGraphicsView::resizeEvent(event);

}

void KMapView::LMObstaclesVisible(QString hostId, bool visible)
{
	if (mapArea->getCurrentHost() != hostId)
		mapArea->resetKMapScene(hostId);

	if (mapArea != NULL)
		mapArea->setLPMObstaclesVisible(visible);
	else
		std::cout << "[41] KMapView::LMObstaclesVisible : Fatal !" << std::endl;

}

void KMapView::LMPathVisible(QString hostId, bool visible)
{
	if (mapArea->getCurrentHost() != hostId)
		mapArea->resetKMapScene(hostId);

	if (mapArea != NULL)
		mapArea->setLPMPathVisible(visible);
	else
		std::cout << "[53] KMapView::LMObstaclesVisible : Fatal !" << std::endl;

}

void KMapView::LMTargetCoordVisible(QString hostId, bool visible)
{
	if (mapArea->getCurrentHost() != hostId)
		mapArea->resetKMapScene(hostId);

	if (mapArea != NULL)
		mapArea->setLPMTargetCoordVisible(visible);
	else
		std::cout << "[51] KLabel::LMObstaclesVisible : Fatal !" << std::endl;

}


void KMapView::gridInfoUpdateHandler(GridInfo gim, QString hostId)
{
	if( mapArea && mapArea->getCurrentHost() == hostId)
	{
		for (int ring=0; ring < TotalRings; ring++)
			for (int sector=0; sector < N; sector++){
				mapArea->PolarGrid[0][ring][sector] = gim.gridcells(ring*N+sector);
			}
		mapArea->targetX = gim.targetcoordinates(0);
		mapArea->targetY = gim.targetcoordinates(1);
		mapArea->targetA = gim.targetcoordinates(2);

		for (int step = 0; step < PathLength; step++){
			mapArea->pathR[step] = gim.pathstepsring(step);
			mapArea->pathS[step] = gim.pathstepssector(step);
			mapArea->pathO[step] = gim.pathstepsorientation(step);
		}

		if (mapArea->getLPMObstaclesVisible())
		{
			mapArea->setPMObstaclesVisible(false);
			mapArea->updateObstacles(false);
			mapArea->updateArrow();
			mapArea->setPMObstaclesVisible(true);
		}

		if (mapArea->getLPMTargetCoordVisible())
		{
			mapArea->setPMTargetCoordVisible(false);
			mapArea->updateTargetCoordinates();
			mapArea->setPMTargetCoordVisible(true);
		}

		if (mapArea->getLPMPathVisible())
		{
			mapArea->setPMPathVisible(false);
			mapArea->updatePath();
			mapArea->setPMPathVisible(true);
		}

	}else
	{
		std::cout << "[67]Host doesn't exist !" << hostId.toStdString() <<std::endl;
	}

}

