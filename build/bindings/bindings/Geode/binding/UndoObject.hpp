#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS: 0xdbe40
     * @note[short] Android
     */
    static UndoObject* create(GameObject* p0, UndoCommand p1);
    
private:
    [[deprecated("UndoObject::initWithTransformObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn initWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
public:
    
private:
    [[deprecated("UndoObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, UndoCommand p1);
public:
    
private:
    [[deprecated("UndoObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, UndoCommand p1);
public:
    
private:
    [[deprecated("UndoObject::setObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS: 0xdea20
     * @note[short] Android
     */
    TodoReturn createWithArray(cocos2d::CCArray* p0, UndoCommand p1);
    
private:
    [[deprecated("UndoObject::createWithTransformObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createWithTransformObjects(cocos2d::CCArray* p0, UndoCommand p1);
public:
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
};
