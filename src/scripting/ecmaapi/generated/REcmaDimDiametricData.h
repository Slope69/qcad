// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMADIMDIAMETRICDATA_H
        #define RECMADIMDIAMETRICDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimDiametricData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaDimDiametricData {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionData(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFarChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFarChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMeasuredValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTextData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimDiametricData* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimDiametricData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    