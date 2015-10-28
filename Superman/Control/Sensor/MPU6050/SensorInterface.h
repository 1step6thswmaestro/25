/*
 * SensorInterface.h
 *
 *  Created on: 2015. 10. 7.
 *      Author: wlsdn
 */

#ifndef SENSORINTERFACE_H_
#define SENSORINTERFACE_H_

/*
 * IMU�� �⺻���� �Լ����� ���� �� �κ�����, ���ο� ������ �߰��Ҷ� IMUInterface Ŭ������ ��� �޾� �ڵ��� ��.
 */

class IMUInterface
{
public:
	/*
	 * init() :
	 * 		����  �ʱ�ȭ, ����Ȯ��.
	 * return :
	 * 		1  = ���� ���� , 0 = ���� ����
	 */
	int init();

	/*
	 * getIMUData(float *roll, float *pitch, float *yaw) :
	 * 		������ Roll, Pitch, Yaw�� ���.
	 */
	void getIMUData(float *roll, float *pitch, float *yaw);

	/*
	 * void calibration() :
	 * 		���� offest ����
	 */
	void calibration();
};


#endif /* SENSORINTERFACE_H_ */
