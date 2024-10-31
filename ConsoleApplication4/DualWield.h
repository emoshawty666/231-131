#pragma once
#include <iostream>
using namespace std;

template <typename LeftWeaponType, typename RightWeaponType>
class DualWiel
{
private:
	LeftWeaponType leftHand;
	RightWeaponType rightHand;

public:
	DualWiel(const LeftWeaponType& left,const  RightWeaponType& right) : leftHand(left), rightHand(right) {}

	LeftWeaponType getLeftHand() const
	{
		return leftHand;
	}
	RightWeaponType getRightHand() const
	{
		return rightHand;
	}

	void setLeftHand(const LeftWeaponType& left)
	{
		leftHand = left;
	}
	void setRightHand(RightWeaponType& right)
	{
		rightHand = right;
	}
};

