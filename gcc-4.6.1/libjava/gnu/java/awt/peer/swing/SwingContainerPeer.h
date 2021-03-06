
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_swing_SwingContainerPeer__
#define __gnu_java_awt_peer_swing_SwingContainerPeer__

#pragma interface

#include <gnu/java/awt/peer/swing/SwingComponentPeer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace swing
          {
              class SwingContainerPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class Graphics;
        class Image;
        class Insets;
      namespace event
      {
          class KeyEvent;
          class MouseEvent;
      }
    }
  }
}

class gnu::java::awt::peer::swing::SwingContainerPeer : public ::gnu::java::awt::peer::swing::SwingComponentPeer
{

public:
  SwingContainerPeer(::java::awt::Container *);
public: // actually protected
  virtual void addHeavyweightDescendent(::java::awt::Component *);
  virtual void removeHeavyweightDescendent(::java::awt::Component *);
  virtual JArray< ::java::awt::Component * > * getHeavyweightDescendents();
public:
  virtual ::java::awt::Insets * insets();
  virtual ::java::awt::Insets * getInsets();
  virtual void beginValidate();
  virtual void endValidate();
  virtual void beginLayout();
  virtual void endLayout();
  virtual jboolean isPaintPending();
  virtual jboolean isRestackSupported();
  virtual void cancelPendingPaint(jint, jint, jint, jint);
  virtual void restack();
public: // actually protected
  virtual void peerPaint(::java::awt::Graphics *, jboolean);
private:
  jboolean isDoubleBuffering();
public: // actually protected
  virtual void peerPaintChildren(::java::awt::Graphics *);
  virtual void handleMouseEvent(::java::awt::event::MouseEvent *);
  virtual void handleMouseMotionEvent(::java::awt::event::MouseEvent *);
  virtual void handleKeyEvent(::java::awt::event::KeyEvent *);
private:
  ::java::awt::Component * getFocusOwner();
  ::java::util::LinkedList * __attribute__((aligned(__alignof__( ::gnu::java::awt::peer::swing::SwingComponentPeer)))) heavyweightDescendents;
  ::java::awt::Image * backbuffer;
  ::java::awt::Component * focusOwner;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_swing_SwingContainerPeer__
