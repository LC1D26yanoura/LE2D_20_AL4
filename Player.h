#pragma once

#include<Model.h>
#include<WorldTransform.h>

class Player {
	public:

	/// <summary>
	/// ������
	/// </summary>
	void Initialize(Model*model_,uint32_t textureHandle_,ViewProjection*viewprojection_);



	/// <summary>
	/// ���t���[������
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

private:





};