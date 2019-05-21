//	Корректировка крайнего верхнего положения вертикального сустава:
	const	uint8_t		JOINT_VMAX[6] = {50, 50, 50, 50, 50, 50};	//	1-6 конечность ( ниже 0 ... 50 ... 100 выше)

//	Корректировка крайнего нижнего положения вертикального сустава:
	const	uint8_t		JOINT_VMIN[6] = {50, 50, 50, 50, 50, 50};	//	1-6 конечность ( ниже 0 ... 50 ... 100 выше)
	
//	Корректировка крайнего переднего положения горизонтального сустава:
	const	uint8_t		JOINT_HMAX[6] = {50, 50, 50, 50, 50, 50};	//	1-6 конечность (назад 0 ... 50 ... 100 вперед)

//	Корректировка крайнего заднего положения горизонтального сустава:
	const	uint8_t		JOINT_HMIN[6] = {50, 50, 50, 50, 50, 50};	//	1-6 конечность (назад 0 ... 50 ... 100 вперед)

//	Углы повортов вертикальных суставов:
			uint8_t		iXP_angle_Odd_Top			= 40;	//	крайний угол смещения вверх нечетных конечностей
			uint8_t		iXP_angle_Evn_Top			= 40;	//	крайний угол смещения вверх   четных конечностей
			uint8_t		iXP_angle_Odd_Bottom		= 40;	//	крайний угол смещения вниз  нечетных конечностей
			uint8_t		iXP_angle_Evn_Bottom		= 40;	//	крайний угол смещения вниз    четных конечностей

//	Углы повортов горизонтальных суставов:
			uint8_t		iXP_angle_Odd_Ahead			= 30;	//	крайний угол смещения вперёд  нечетных конечностей
			uint8_t		iXP_angle_Evn_Ahead			= 35;	//	крайний угол смещения вперёд    четных конечностей
			uint8_t		iXP_angle_Odd_Back			= 35;	//	крайний угол смещения назад   нечетных конечностей
			uint8_t		iXP_angle_Evn_Back			= 30;	//	крайний угол смещения назад     четных конечностей
