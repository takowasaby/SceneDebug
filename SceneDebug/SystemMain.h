#pragma once
#include "SceneChanger.h"
class SystemMain : public SceneChanger
{
public:
	SystemMain() = default;
	~SystemMain() = default;
	bool initialize() const;
	void finalize() const;
	void main();
	void onSceneChanged(const eScene scene, const Parameter& parameter, const bool stackClear) override {};
	void onScenePoped() override {};
};

