#pragma once
#include "../pch.hpp"

class CustomLayer : public gd::FLAlertLayer
{
public:
	CCPoint alertSize{};
	gd::CCMenuItemSpriteExtra* closeBtn{};

	bool createBasics(CCPoint, SEL_MenuHandler, float = 1, const ccColor4B & = { 0x00, 0x00, 0x00, 0x4B });
	void createTitle(std::string, float = .75f, float = 1);
	gd::CCMenuItemSpriteExtra* createButton(const char*, CCPoint, SEL_MenuHandler, int = -1, float = 1.0f, float = 1.2f);
	virtual void onClose(CCObject*) = 0;
	void keyDown(enumKeyCodes);
	void keyBackClicked();
};
