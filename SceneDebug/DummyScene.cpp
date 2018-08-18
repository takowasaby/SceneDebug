#include "DummyScene.h"

DummyScene::DummyScene(SceneChanger * impl, const Parameter & parameter) :
	AbstractScene(impl, parameter)
{
}

void DummyScene::update()
{
}

void DummyScene::draw() const
{
}
