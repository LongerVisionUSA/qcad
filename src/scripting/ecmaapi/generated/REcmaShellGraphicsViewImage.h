


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLGRAPHICSVIEWWORKER_H
        #define RECMASHELLGRAPHICSVIEWWORKER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGraphicsViewWorker.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellGraphicsViewWorker : public RGraphicsViewWorker {

        public:
      
    // Destructor:
    
            ~REcmaShellGraphicsViewWorker();
        static RGraphicsViewWorker* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellGraphicsViewWorker* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    
    // Constructors:
    
      REcmaShellGraphicsViewWorker(
                QObject * parent
        = NULL
            );
        
    
    
      int getNumThreads(
                
            );
        
    
    
      void setNumThreads(
                int n
            );
        
    
    
      void simulateMouseMoveEvent(
                
            );
        
    
    
      void setScene(
                RGraphicsSceneQt * scene, bool regen
        = true
            );
        
    
    
      void setBackgroundColor(
                const QColor & col
            );
        
    
    
      void regenerate(
                bool force
        = false
            );
        
    
    
      void repaintView(
                
            );
        
    
    
      void updateImage(
                
            );
        
    
    
      void giveFocus(
                
            );
        
    
    
      bool hasFocus(
                
            );
        
    
    
      void removeFocus(
                
            );
        
    
    
      void saveViewport(
                
            );
        
    
    
      void restoreViewport(
                
            );
        
    
    
      RVector mapFromView(
                const RVector & v, double z
        = 0.0
            );
        
    
    
      RVector mapToView(
                const RVector & v
            );
        
    
    
      double mapDistanceFromView(
                double d
            );
        
    
    
      double mapDistanceToView(
                double d
            );
        
    
    
      int getWidth(
                
            );
        
    
    
      int getHeight(
                
            );
        
    
    
      void resizeImage(
                int w, int h
            );
        
    
    
      void paintGridPoint(
                const RVector & ucsPosition
            );
        
    
    
      void paintGridLine(
                const RLine & ucsPosition
            );
        
    
    
      void paintCursorLine(
                const RLine & ucsPosition
            );
        
    
    
      void setPaintOrigin(
                bool val
            );
        
    
    
      void setPanOptimization(
                bool on
            );
        
    
    
      bool getPanOptimization(
                
            );
        
    
    
      void paintEntitiesMulti(
                const RBox & queryBox
            );
        
    
    
      void paintEntityThread(
                RGraphicsViewWorker * worker, REntity::Id id, bool preview
        = false
            );
        
    
    
      void paintDrawableThread(
                RGraphicsViewWorker * worker, RGraphicsSceneDrawable & drawable, const RBox & clipRectangle, bool preview
        = false
            );
        
    
    
      void paintOverlay(
                RGraphicsViewWorker * worker
            );
        
    
    
      QImage getBuffer(
                
            );
        
    
    
      void clearBackground(
                
            );
        
    
    
      void addToBackground(
                const RGraphicsSceneDrawable & drawable
            );
        
    
    
      void setBackgroundTransform(
                double bgFactor, const RVector & bgOffset
            );
        
    
    
      void clearOverlay(
                int overlayId
            );
        
      void clearOverlay(
                int overlayId, RObject::Id objectId
            );
        
    
    
      void addToOverlay(
                int overlayId, RObject::Id objectId, const RGraphicsSceneDrawable & drawable
            );
        
    
    
      void setColorCorrectionOverride(
                bool on
            );
        
    
    
      bool getColorCorrectionOverride(
                
            );
        
    
    
      void setMinimumLineweight(
                double lw
            );
        
    
    
      double getMinimumLineweight(
                
            );
        
    
    
      void setMaximumLineweight(
                double lw
            );
        
    
    
      double getMaximumLineweight(
                
            );
        
    
    
      void setPaintOffset(
                const RVector & offset
            );
        
    
    
      RVector getPaintOffset(
                
            );
        
    
    
      bool isAlphaEnabled(
                
            );
        
    
    
      void setAlphaEnabled(
                bool on
            );
        
    
    
      QImage getGraphicsBufferWithPreview(
                
            );
        
    
    
      RVector getLastKnownScreenPosition(
                
            );
        
    
    
      void setLastKnownScreenPosition(
                const RVector & p
            );
        
    
    
      void setLastKnownModelPosition(
                const RVector & p
            );
        
    
    
      bool isShared(
                
            );
        
    
    
      bool registerForFocus(
                
            );
        
    
    
      void viewportChangeEvent(
                
            );
        
    
    
      void emitUpdateSnapInfo(
                RSnap * snap, RSnapRestriction * restriction
            );
        
    
    
      void emitUpdateTextLabel(
                const RTextLabel & textLabel
            );
        
    
    
      double getDevicePixelRatio(
                
            );
        
    
    
      QList < RPainterPath > getTextLayoutsPainterPaths(
                const RTextBasedData & text, const QList < RTextLayout > & textLayouts
            );
        
    
    
      void applyMinimumLineweight(
                QPen & pen
            );
        
    
    
      void applyColorCorrection(
                QPen & pen
            );
        
      void applyColorCorrection(
                QBrush & brush
            );
        
    
    
      void applyColorMode(
                QPen & pen
            );
        
      void applyColorMode(
                QBrush & brush
            );
        
    
    
      double getPointSize(
                double pSize
            );
        
    
    
      void drawDot(
                RGraphicsViewWorker * worker, QPointF pt
            );
        
    
    
      void drawPlus(
                RGraphicsViewWorker * worker, QPointF pt, double pSize
            );
        
    
    
      void drawEx(
                RGraphicsViewWorker * worker, QPointF pt, double pSize
            );
        
    
    
      void drawVBar(
                RGraphicsViewWorker * worker, QPointF pt, double pSize
            );
        
    
    
      void drawCircle(
                RGraphicsViewWorker * worker, QPointF pt, double pSize
            );
        
    
    
      void drawSquare(
                RGraphicsViewWorker * worker, QPointF pt, double pSize
            );
        
    
    
      void paintOrigin(
                RGraphicsViewWorker * worker
            );
        
    
    
      void paintReferencePoint(
                RGraphicsViewWorker * worker, const RRefPoint & pos, bool highlight
            );
        
    
    
      void paintCursor(
                RGraphicsViewWorker * worker
            );
        
    
    
      void paintRelativeZero(
                RGraphicsViewWorker * worker
            );
        
    
    
      void endPaint(
                
            );
        
    
    
      void invalidate(
                bool force
        = false
            );
        
    
    
      void initWorkers(
                
            );
        
    
    
      void updateTransformation(
                
            );
        
    
  
        // methods of 1st level base class RGraphicsView:
        
      void setViewportNumber(
                int n
            );
        
    
      int getViewportNumber(
                
            );
        
    
      void clear(
                
            );
        
    
      void clearCaches(
                
            );
        
    
      void setDisplayOnlyCurrentUcs(
                bool on
            );
        
    
      void setScene(
                RGraphicsScene * scene, bool regen
        = true
            );
        
    
      RGraphicsScene * getScene(
                
            );
        
    
      RDocument * getDocument(
                
            );
        
    
      RDocumentInterface * getDocumentInterface(
                
            );
        
    
      RVector mapFromView(
                const RVector & v, double z
        = 0.0
            );
        
    
      RVector mapToView(
                const RVector & v
            );
        
      RBox mapToView(
                const RBox & box
            );
        
    
      double mapDistanceFromView(
                double d
            );
        
    
      double mapDistanceToView(
                double d
            );
        
    
      QList < RVector > mapCornersFromView(
                
            );
        
    
      RBox getBox(
                
            );
        
    
      RVector getMinimum(
                
            );
        
    
      RVector getMaximum(
                
            );
        
    
      void handleTerminateEvent(
                RTerminateEvent & event
            );
        
    
      void handleKeyPressEvent(
                QKeyEvent & event
            );
        
    
      void handleKeyReleaseEvent(
                QKeyEvent & event
            );
        
    
      void simulateMouseMoveEvent(
                
            );
        
    
      void handleMouseMoveEvent(
                RMouseEvent & event
            );
        
    
      void handleMousePressEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseReleaseEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseDoubleClickEvent(
                RMouseEvent & event
            );
        
    
      void handleWheelEvent(
                RWheelEvent & event
            );
        
    
      void handleTabletEvent(
                RTabletEvent & event
            );
        
    
      void handleSwipeGestureEvent(
                QSwipeGesture & gesture
            );
        
    
      void handlePanGestureEvent(
                QPanGesture & gesture
            );
        
    
      void handlePinchGestureEvent(
                QPinchGesture & gesture
            );
        
    
      void giveFocus(
                
            );
        
    
      bool hasFocus(
                
            );
        
    
      void removeFocus(
                
            );
        
    
      void viewportChangeEvent(
                
            );
        
    
      void saveViewport(
                
            );
        
    
      void restoreViewport(
                
            );
        
    
      void zoomIn(
                
            );
        
      void zoomIn(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoomOut(
                
            );
        
      void zoomOut(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoom(
                const RVector & center, double factor
            );
        
    
      void zoomTo(
                const RBox & window, int margin
        = 0
            );
        
    
      void zoomPrevious(
                
            );
        
    
      void autoZoom(
                int margin
        = RDEFAULT_MIN1, bool ignoreEmpty
        = false, bool ignoreLineweight
        = false
            );
        
    
      bool zoomToSelection(
                int margin
        = RDEFAULT_MIN1
            );
        
    
      bool zoomToEntities(
                const QSet < REntity::Id > & ids, int margin
        = RDEFAULT_MIN1
            );
        
    
      void centerToPoint(
                const RVector & point
            );
        
    
      void centerToBox(
                const RBox & box
            );
        
    
      void pan(
                const RVector & delta, bool regen
        = true
            );
        
    
      void startPan(
                
            );
        
    
      double getFactor(
                bool includeStepFactor
        = true
            );
        
    
      void setFactor(
                double f, bool regen
        = true
            );
        
    
      RVector getOffset(
                bool includeStepOffset
        = true
            );
        
    
      void setOffset(
                const RVector & offset, bool regen
        = true
            );
        
    
      void regenerate(
                QSet < REntity::Id > & affectedEntities
            );
        
      void regenerate(
                bool force
        = false
            );
        
    
      void repaintView(
                
            );
        
    
      int getWidth(
                
            );
        
    
      int getHeight(
                
            );
        
    
      int isActive(
                
            );
        
    
      bool getSignalsBlocked(
                
            );
        
    
      void setSignalsBlocked(
                bool on
            );
        
    
      void setNavigationAction(
                RAction * action
            );
        
    
      RGrid * getGrid(
                
            );
        
    
      void setGrid(
                RGrid * g
            );
        
    
      void setGridVisible(
                bool on
            );
        
    
      bool isGridVisible(
                
            );
        
    
      void paintGridPoints(
                const QVector < double > & ucsPositionX, const QVector < double > & ucsPositionY
            );
        
    
      void paintGridPoint(
                const RVector & arg1
            );
        
    
      void paintGridLine(
                const RLine & arg1
            );
        
    
      void paintCursorLine(
                const RLine & arg1
            );
        
    
      QCursor getCursor(
                
            );
        
    
      void setCursor(
                Qt::CursorShape arg1
            );
        
      void setCursor(
                const QCursor & arg1
            );
        
    
      RRefPoint getClosestReferencePoint(
                const RVector & screenPosition, int range
            );
        
      RRefPoint getClosestReferencePoint(
                REntity::Id entityId, const RVector & screenPosition
            );
        
    
      REntity::Id getClosestEntity(
                const RVector & screenPosition, int range, int strictRange, bool includeLockedLayers
        = true, bool selectedOnly
        = false
            );
        
    
      void setBackgroundColor(
                const QColor & col
            );
        
    
      QColor getBackgroundColor(
                
            );
        
    
      int getMargin(
                
            );
        
    
      void setMargin(
                int m
            );
        
    
      void setExporting(
                bool on
            );
        
    
      bool isExporting(
                
            );
        
    
      bool isPrintingOrExporting(
                
            );
        
    
      void setPrinting(
                bool on
            );
        
    
      bool isPrinting(
                
            );
        
    
      void setPrintPreview(
                bool on
            );
        
    
      bool isPrintPreview(
                
            );
        
    
      void setPrintPointSize(
                const RVector & s
            );
        
    
      void setColorMode(
                RGraphicsView::ColorMode cm
            );
        
    
      RGraphicsView::ColorMode getColorMode(
                
            );
        
    
      void setHairlineMode(
                bool on
            );
        
    
      bool getHairlineMode(
                
            );
        
    
      void setHairlineMinimumMode(
                bool on
            );
        
    
      bool getHairlineMinimumMode(
                
            );
        
    
      QList < RTextLabel > getTextLabels(
                
            );
        
    
      void clearTextLabels(
                
            );
        
    
      void addTextLabel(
                const RTextLabel & textLabel
            );
        
    
      RVector getLastKnownMousePosition(
                
            );
        
    
      double getCurrentStepScaleFactor(
                
            );
        
    
      void setCurrentStepScaleFactor(
                double f
            );
        
    
      RVector getCurrentStepOffset(
                
            );
        
    
      void setCurrentStepOffset(
                const RVector & s
            );
        
    
      void setTextHeightThresholdOverride(
                int v
            );
        
    
      int getTextHeightThresholdOverride(
                
            );
        
    
      void updateTextHeightThreshold(
                
            );
        
    
      bool isPathVisible(
                const RPainterPath & path
            );
        
    
      void setAntialiasing(
                bool val
            );
        
    
      bool getAntialiasing(
                
            );
        
    
      double getDevicePixelRatio(
                
            );
        
    
      bool isShared(
                
            );
        
    
      bool registerForFocus(
                
            );
        
    
      void setWidget(
                QWidget * w
            );
        
    
      QWidget * getWidget(
                
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	static  QScriptValue
        getTextLayoutsPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyMinimumLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyColorCorrection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyColorMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawDot
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawPlus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawEx
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawVBar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawCircle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawSquare
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintOrigin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endPaint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        invalidate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initWorkers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTransformation
        (QScriptContext* context, QScriptEngine* engine) 
        ;QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellGraphicsViewWorker*)
        
	#endif
    