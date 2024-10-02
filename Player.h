#pragma once

#include<Model.h>
#include<WorldTransform.h>

class Player {
	public:

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize(Model*model_,uint32_t textureHandle_,ViewProjection*viewprojection_);



	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private:





};