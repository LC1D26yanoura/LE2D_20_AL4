#pragma once

#include<Model.h>
#include<WorldTransform.h>

class Player {
	public:

	/// <summary>
	/// ‰Šú‰»
	/// </summary>
	void Initialize(Model*model_,uint32_t textureHandle_,ViewProjection*viewprojection_);



	/// <summary>
	/// –ˆƒtƒŒ[ƒ€ˆ—
	/// </summary>
	void Update();

	/// <summary>
	/// •`‰æ
	/// </summary>
	void Draw();

private:





};