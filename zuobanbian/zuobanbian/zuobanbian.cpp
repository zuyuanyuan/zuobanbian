/*****************************************************************************
**
** zuobanbian.cpp
**
** Description:
**     Contains Unigraphics entry points for the application.
**
*****************************************************************************/

/* Include files */
#if ! defined ( __hp9000s800 ) && ! defined ( __sgi ) && ! defined ( __sun )
#   include <strstream>
#   include <iostream>
    using std::ostrstream;
    using std::endl;    
    using std::ends;
    using std::cerr;
#else
#   include <strstream.h>
#   include <iostream.h>
#endif
#include <uf.h>
#include <uf_ui.h>
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/Preferences_SessionPreferences.hxx>
#include <NXOpen/Preferences_SessionSketch.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectIReferenceAxis.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/Update.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchDimensionalConstraint.hxx>
#include <NXOpen/SketchGeometricConstraint.hxx>

#include <NXOpen/Scalar.hxx>
#include <NXOpen/ScalarCollection.hxx>

#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CurveFeatureRule.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_SketchFeature.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/Unit.hxx>

#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Face.hxx>
#include <NXOpen/Features_DatumPlaneBuilder.hxx>
#include <NXOpen/Features_DatumPlaneFeature.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/DatumCollection.hxx>
#include <NXOpen/DatumPlane.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_SessionPreferences.hxx>
#include <NXOpen/Preferences_SessionSketch.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectIReferenceAxis.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/Unit.hxx>
#include <NXOpen/UnitCollection.hxx>
#include <NXOpen/UnitCollection.hxx>

#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>

#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CurveFeatureRule.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/DirectionCollection.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_ExtrudeBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_SketchFeature.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
#include <NXOpen/GeometricUtilities_Extend.hxx>
#include <NXOpen/GeometricUtilities_FeatureOffset.hxx>
#include <NXOpen/GeometricUtilities_FeatureOptions.hxx>
#include <NXOpen/GeometricUtilities_Limits.hxx>
#include <NXOpen/GeometricUtilities_MultiDraft.hxx>
#include <NXOpen/GeometricUtilities_SimpleDraft.hxx>
#include <NXOpen/GeometricUtilities_SmartVolumeProfileBuilder.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SectionCollection.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/Unit.hxx>
#include <uf_exit.h>
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_Dimension.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_DatumCsys.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/InferredConstraintsBuilder.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/ModelingView.hxx>
#include <NXOpen/ModelingViewCollection.hxx>
#include <NXOpen/NXMatrix.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/Preferences_SketchPreferences.hxx>
#include <NXOpen/SelectCurveList.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Sketch.hxx>
#include <NXOpen/SketchCollection.hxx>
#include <NXOpen/SketchDimensionalConstraint.hxx>
#include <NXOpen/SketchGeometricConstraint.hxx>
#include <NXOpen/SketchHelpedDimensionalConstraint.hxx>
#include <NXOpen/SketchHelpedGeometricConstraint.hxx>
#include <NXOpen/SketchQuickTrimBuilder.hxx>
#include <NXOpen/SketchTangentConstraint.hxx>
#include <NXOpen/View.hxx>
#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Axis.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CoordinateSystem.hxx>
#include <NXOpen/Direction.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/Features_MirrorBuilder.hxx>
#include <NXOpen/Features_SelectFeatureList.hxx>
#include <NXOpen/GeometricUtilities_AlongPathPattern.hxx>
#include <NXOpen/GeometricUtilities_AngularPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_CircularPattern.hxx>
#include <NXOpen/GeometricUtilities_DistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_GeneralPattern.hxx>
#include <NXOpen/GeometricUtilities_HorizontalReference.hxx>
#include <NXOpen/GeometricUtilities_MirrorPattern.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternDefinition.hxx>
#include <NXOpen/GeometricUtilities_PatternFill.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItemList.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementsList.hxx>
#include <NXOpen/GeometricUtilities_PatternOrientation.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsList.hxx>
#include <NXOpen/GeometricUtilities_PatternSpacingsListItemList.hxx>
#include <NXOpen/GeometricUtilities_PolygonPattern.hxx>
#include <NXOpen/GeometricUtilities_PolygonPatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_RectangularPattern.hxx>
#include <NXOpen/GeometricUtilities_ReferencePattern.hxx>
#include <NXOpen/GeometricUtilities_SpiralPattern.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectCoordinateSystemList.hxx>
#include <NXOpen/SelectISurface.hxx>
#include <NXOpen/SelectNXObject.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/Unit.hxx>

#include <uf_defs.h>
#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/BodyDumbRule.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Features_BooleanBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_BooleanRegionSelect.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/SelectBodyList.hxx>
#include <NXOpen/SelectDisplayableObjectList.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/TaggedObject.hxx>

#include <NXOpen/NXException.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/BasePart.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/EdgeMultipleSeedTangentRule.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/ExpressionCollection.hxx>
#include <NXOpen/Features_EdgeBlendBuilder.hxx>
#include <NXOpen/Features_Extrude.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_BlendLimitsData.hxx>
#include <NXOpen/GeometricUtilities_FacePlaneSelectionBuilder.hxx>
#include <NXOpen/GeometricUtilities_FacePlaneSelectionBuilderCollection.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Plane.hxx>
#include <NXOpen/PlaneCollection.hxx>
#include <NXOpen/Preferences_PartModeling.hxx>
#include <NXOpen/Preferences_PartPreferences.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/TaggedObjectList.hxx>

using namespace NXOpen;

#define UF_CALL(X) (report_error( __FILE__, __LINE__, #X, (X)))

static int report_error( char *file, int line, char *call, int irc)
{
    if (irc)
    {
        char err[133],
             msg[133];

        sprintf(msg, "*** ERROR code %d at line %d in %s:\n+++ ",
            irc, line, file);
        UF_get_fail_message(irc, err);

        UF_print_syslog(msg, FALSE);
        UF_print_syslog(err, FALSE);
        UF_print_syslog("\n", FALSE);
        UF_print_syslog(call, FALSE);
        UF_print_syslog(";\n", FALSE);

        if (!UF_UI_open_listing_window())
        {
            UF_UI_write_listing_window(msg);
            UF_UI_write_listing_window(err);
            UF_UI_write_listing_window("\n");
            UF_UI_write_listing_window(call);
            UF_UI_write_listing_window(";\n");
        }
    }

    return(irc);
}


/*****************************************************************************
**  Activation Methods
*****************************************************************************/
/*  Unigraphics Startup
**      This entry point activates the application at Unigraphics startup */
char* getJournalId(char name[]);
char* getFeatureName(char name[]);
void createRect(double leftUpX,double leftUpY,double rightDownX,double rightDownY,double z);
void createSketch();
//void lashen(int height,int lineNum,int sketchNum,int sketchId,char name[]);
void createRect(double leftUpX,double leftUpZ,double rightDownX,double rightDownZ,double y,int id);
void createPlane(int x);
void drawCircle(double x,double y,double z,double r);
// void createSketchOnExtrude(int extrudeNum,char *str1,char *str2);
// void fanxianglashen(char *sketchId,char *sketchNum,char *lashenLine,char *targetExtrue,int length);
void qiuhe(char *str1,char *str2,char *setName);
void unDo();



void lashen(int height,char targetSketchName[],char setName[]);
void fanxianglashen(char targetSketchName[],char targetExtrueName[],int length,char setName[]);
void createSketchOnExtrude(char targetExtrude[],char *str1,char *str2,char setName[]);
void createSemiCircle();
void mirrorFeatrue();
void createSketchOnExtrude(char targetExtrude[],char *str1,char *str2,char setName[],bool isReverse);
void daojiao(char *str1,char *str2,char *r,char *setName);


extern DllExport void ufsta( char *param, int *returnCode, int rlen )
{
    /* Initialize the API environment */
    if( UF_CALL(UF_initialize()) ) 
    {
        /* Failed to initialize */
        return;
    }
	UI *myUI = UI::GetUI();
	NXMessageBox *message = myUI->NXMessageBox();
	Session *theSession = Session::GetSession();

	createSketch();
	createRect(-50,20,35,-20,0);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	//lashen(5,1,0,1,"sanyuan1");
	lashen(5,"mainSketch","extrude1");
	//createSketchOnExtrude(2,"EDGE * 130 * 140 {(-9.5,-4.5,5)(-0,-4.5,5)(9.5,-4.5,5) EXTRUDE(2)}","FACE 130 {(-0,-4.5,0) EXTRUDE(2)}");
	createSketchOnExtrude("extrude1","EDGE * 130 * 140 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(2)}","FACE 130 {(0,0,5) EXTRUDE(2)}","sketch1");
	createRect(-50,20,35,15,5);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	createSketchOnExtrude("extrude1","EDGE * 130 * 140 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(2)}","FACE 130 {(0,0,5) EXTRUDE(2)}","sketch2");
	createRect(-50,-15,35,-20,5);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	//lashen(40,5,1,3,"zuyuan2");
	lashen(35,"sketch1","extrude2");
	lashen(35,"sketch2","extrude3");
	//createSketchOnExtrude(4,"EDGE * 150 * 210 {(-50,-20,45)(0,-20,45)(50,-20,45) EXTRUDE(4)}","FACE 210 {(0,-20,25) EXTRUDE(4)}");
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"111111");
	createSketchOnExtrude("extrude2","EDGE * 120 * 140 {(35,20,5)(-7.5,20,5)(-50,20,5) EXTRUDE(5)}","FACE 140 {(-7.5,20,22.5) EXTRUDE(5)}","sketch3");
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"222222");
	createRect(-25,40,35,10,20,1);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	//fanxianglashen("SKETCH(5)","SKETCH_002","Curve Line15","EXTRUDE(4)",5);FACE 160 {(0,20,25) EXTRUDE(5)}
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"111111");
	fanxianglashen("sketch3","extrude2",5,"fanxiang1");
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"222222");

	//createSketchOnExtrude(4,"EDGE * 120 * 160 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(4)1}","FACE 160 {(0,20,25) EXTRUDE(4)1}");
	createSketchOnExtrude("extrude3","EDGE * 140 * 150 {(-50,-20,40)(-50,-20,22.5)(-50,-20,5) EXTRUDE(6)}","FACE 150 {(-7.5,-20,22.5) EXTRUDE(6)}","sketch4");
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"333333");
	
	createRect(-25,40,35,10,-20,1);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	//fanxianglashen("SKETCH(7)","SKETCH_003","Curve Line19","EXTRUDE(4)1",5);
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"444444");
	fanxianglashen("sketch4","extrude3",5,"fanxiang2");
	//message->Show("111111",NXMessageBox::DialogTypeWarning,"555555");

	//画圆
	//createSketchOnExtrude(4,"EDGE * 150 * 210 {(-50,-20,45)(0,-20,45)(50,-20,45) EXTRUDE(4)}","FACE 210 {(0,-20,25) EXTRUDE(4)}");
	try
	{
		createSketchOnExtrude("extrude3","EDGE * 140 * 150 {(-50,-20,40)(-50,-20,22.5)(-50,-20,5) EXTRUDE(6)}","FACE 150 {(-7.5,-20,22.5) EXTRUDE(6)}","sketch5");

	}
	catch(NXException & e)
	{
		message->Show("111",NXMessageBox::DialogTypeWarning,e.GetMessage());
	}

	drawCircle(-38, -20.0, 28,4);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);

	//createSketchOnExtrude(4,"EDGE * 120 * 160 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(4)1}","FACE 160 {(0,20,25) EXTRUDE(4)1}");
	createSketchOnExtrude("extrude2","EDGE * 120 * 140 {(35,20,5)(-7.5,20,5)(-50,20,5) EXTRUDE(5)}","FACE 140 {(-7.5,20,22.5) EXTRUDE(5)}","sketch6");

	drawCircle(-38, 20.0, 28,4);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);

	//fanxianglashen("SKETCH(9)","SKETCH_004","Curve Arc1","EXTRUDE(4)",5);
	//fanxianglashen("SKETCH(10)","SKETCH_005","Curve Arc2","EXTRUDE(4)1",5);
	fanxianglashen("sketch5","extrude3",5,"fanxiang3");
	fanxianglashen("sketch6","extrude2",5,"fanxiang4");

	//createSketchOnExtrude(2,"EDGE * 130 * 140 {(-9.5,-4.5,5)(-0,-4.5,5)(9.5,-4.5,5) EXTRUDE(2)}","FACE 130 {(-0,-4.5,0) EXTRUDE(2)}");
	
	//fanxianglashen("SKETCH(13)","SKETCH_006","Curve Arc4","EXTRUDE(2)",5);
	//lashen(5,9,1,3);

	createSketchOnExtrude("extrude1","EDGE * 130 * 140 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(2)}","FACE 130 {(0,0,5) EXTRUDE(2)}","sketch7");
	createRect(-50,15,-45,-15,5);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	lashen(20,"sketch7","extrude4");
	createSketchOnExtrude("extrude1","EDGE * 130 * 140 {(35,-20,5)(-7.5,-20,5)(-50,-20,5) EXTRUDE(2)}","FACE 120 {(-7.5,0,0) EXTRUDE(2)}","sketch8",true);
	drawCircle(35, 0, 0,15);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	lashen(5,"sketch8","extrude5");
	qiuhe("extrude1","extrude5","plusBody1");
	createSketchOnExtrude("extrude1","EDGE * 130 * 140 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(2)}","FACE 130 {(0,0,5) EXTRUDE(2)}","sketch9");

	drawCircle(0, 0, 5,4);
	drawCircle(24, 0.0, 5,4);
	theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
	//fanxianglashen("SKETCH(13)","SKETCH_006","Curve Arc3","EXTRUDE(2)",5);
	fanxianglashen("sketch9","extrude1",5,"fanxiang5");
	qiuhe("extrude4","extrude1","plusBody2");
	daojiao("extrude3","EDGE * 170 EXTRUDE(10) 150 {(35,-15,10)(35,-17.5,10)(35,-20,10) EXTRUDE(6)}","5","chamfer1");
	daojiao("fanxiang1","EDGE * 150 EXTRUDE(5) 170 {(35,15,10)(35,17.5,10)(35,20,10) EXTRUDE(5)}","5","chamfer2");
	daojiao("extrude1","EDGE * 120 * 140 {(-50,20,0)(-50,0,0)(-50,-20,0) EXTRUDE(16)}","5","chamfer3");
	daojiao("extrude4","EDGE * 130 * 170 {(-45,15,25)(-45,0,25)(-45,-15,25) EXTRUDE(16)}","5","chamfer4");
	daojiao("fanxiang2","EDGE * 140 EXTRUDE(6) 130 {(-25,-15,40)(-25,-17.5,40)(-25,-20,40) EXTRUDE(6)}","10","chamfer5");
	daojiao("extrude2","EDGE * 130 EXTRUDE(8) 140 {(-25,15,40)(-25,17.5,40)(-25,20,40) EXTRUDE(5)}","10","chamfer6");
	daojiao("extrude3","EDGE * 130 * 150 {(-50,-20,40)(-50,-17.5,40)(-50,-15,40) EXTRUDE(6)}","10","chamfer7");
	daojiao("extrude2","EDGE * 130 * 150 {(-50,15,40)(-50,17.5,40)(-50,20,40) EXTRUDE(5)}","10","chamfer8");
	daojiao("extrude3","EDGE * 140 * 150 {(-25,-20,10)(-25,-17.5,10)(-25,-15,10) EXTRUDE(6)}","5","chamfer9");
	daojiao("extrude2","EDGE * 140 * 150 {(-25,20,10)(-25,17.5,10)(-25,15,10) EXTRUDE(5)}","5","chamfer10");
    UF_CALL(UF_terminate());
}

/*****************************************************************************
**  Utilities
*****************************************************************************/

/* Unload Handler
**     This function specifies when to unload your application from Unigraphics.
**     If your application registers a callback (from a MenuScript item or a
**     User Defined Object for example), this function MUST return
**     "UF_UNLOAD_UG_TERMINATE". */
extern "C" DllExport int ufusr_ask_unload()
{
	return (int)Session::LibraryUnloadOptionImmediately;
}


void lashen(int height,char targetSketchName[],char setName[])
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Design Feature->Extrude...
	// ----------------------------------------------
	// Session::UndoMarkId markId1;
	//markId1 = theSession->SetUndoMark(Session::MarkVisibilityVisible, "Start");

	Features::Feature *nullFeatures_Feature(NULL);

	if ( !workPart->Preferences()->Modeling()->GetHistoryMode() )
	{
		throw NXException::Create("Create or edit of a Feature was recorded in History Mode but playback is in History-Free Mode.");
	}

	Features::ExtrudeBuilder *extrudeBuilder1;
	extrudeBuilder1 = workPart->Features()->CreateExtrudeBuilder(nullFeatures_Feature);

	Section *section1;

	UI *plmHomeUI = UI::GetUI();
	NXMessageBox *messageBox = plmHomeUI->NXMessageBox();

	section1 = workPart->Sections()->CreateSection(0,0,0);

	extrudeBuilder1->SetSection(section1);

	extrudeBuilder1->AllowSelfIntersectingSection(true);

	Unit *unit1;
	unit1 = extrudeBuilder1->Draft()->FrontDraftAngle()->Units();


	extrudeBuilder1->SetDistanceTolerance(0.001);

	extrudeBuilder1->BooleanOperation()->SetType(GeometricUtilities::BooleanOperation::BooleanTypeCreate);

	std::vector<Body *> targetBodies1(1);
	Body *nullBody(NULL);
	targetBodies1[0] = nullBody;
	//messageBox->Show("1",NXMessageBox::DialogTypeQuestion,"3");
	extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies1);


	char str[10];
	sprintf(str,"%d",height);


	extrudeBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("0");

	extrudeBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide(str);

	extrudeBuilder1->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder1->Offset()->EndOffset()->SetRightHandSide("5");

	GeometricUtilities::SmartVolumeProfileBuilder *smartVolumeProfileBuilder1;
	smartVolumeProfileBuilder1 = extrudeBuilder1->SmartVolumeProfile();

	smartVolumeProfileBuilder1->SetOpenProfileSmartVolumeOption(false);

	smartVolumeProfileBuilder1->SetCloseProfileRule(GeometricUtilities::SmartVolumeProfileBuilder::CloseProfileRuleTypeFci);

	section1->SetDistanceTolerance(0.001);

	section1->SetChainingTolerance(0.00095);

	section1->SetAllowedEntityTypes(Section::AllowTypesOnlyCurves);


	std::vector<Features::Feature *> features1(1);

	char* sketch = getJournalId(targetSketchName);
	//messageBox->Show("提示",NXMessageBox::DialogTypeQuestion,sketch);
	Features::SketchFeature *sketchFeature1(dynamic_cast<Features::SketchFeature *>(workPart->Features()->FindObject(sketch)));
	features1[0] = sketchFeature1;
	CurveFeatureRule *curveFeatureRule1;
	curveFeatureRule1 = workPart->ScRuleFactory()->CreateRuleCurveFeature(features1);

	section1->AllowSelfIntersection(true);

	std::vector<SelectionIntentRule *> rules1(1);
	rules1[0] = curveFeatureRule1;


	//找到草图1
	try
	{
		char* str = getFeatureName(targetSketchName);
		Sketch *sketch1(dynamic_cast<Sketch *>(workPart->Sketches()->FindObject(str)));
		//拉伸圆用Curve ArcX 拉伸矩形用Curve LineX x代表矩形线编号
		std::vector<NXOpen::NXObject *>s = sketch1->GetAllGeometry();

		const char* temp;
		if (s.size() > 0)
		{
			temp = s[0]->Name().getText();
		}

		char lineName[50] = "Curve ";
		strcat(lineName,temp);

		//messageBox->Show("提示",NXMessageBox::DialogTypeQuestion,str);
		//NXOpen::UI::GetUI()->NXMessageBox()->Show("str",NXMessageBox::DialogTypeInformation,lineName);
		Line *line1(dynamic_cast<Line *>(sketch1->FindObject(lineName)));
		NXObject *nullNXObject(NULL);
		Point3d helpPoint1(0, 0, 0.0);
		section1->AddToSection(rules1, line1, nullNXObject, nullNXObject, helpPoint1, Section::ModeCreate, false);


		Direction *direction1;
		direction1 = workPart->Directions()->CreateDirection(sketch1, SenseForward, SmartObject::UpdateOptionWithinModeling);

		extrudeBuilder1->SetDirection(direction1);
	}
	catch (NXException &ex)
	{
		messageBox->Show("错误",NXMessageBox::DialogTypeQuestion,ex.GetMessage());
	}



	extrudeBuilder1->SetParentFeatureInternal(false);

	Features::Feature *feature1;
	feature1 = extrudeBuilder1->CommitFeature();
	feature1->SetName(setName);

	extrudeBuilder1->Destroy();
}

char* getJournalId(char name[])
{
	char res[100];
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	Part *thePart = theSession->Parts()->Work();

	NXOpen::Features::FeatureCollection::iterator i;

	for (i =thePart->Features()->begin(); i!=thePart->Features()->end(); i++)
	{
		//NXOpen::UI::GetUI()->NXMessageBox()->Show("hhahahhaha",NXMessageBox::DialogTypeInformation,(*i)->Name().GetText());
		if (strstr((*i)->Name().GetText(),name))
		{
			char extrudeName[100];
			strcpy(extrudeName,(*i)->JournalIdentifier().GetText());
			//NXOpen::UI::GetUI()->NXMessageBox()->Show("hhahahhaha",NXMessageBox::DialogTypeInformation,extrudeName);
			//Features::Extrude *extrude(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject(extrudeName)));
			//extrude1->SetName("zuyuanzhang");
			strcpy(res,(*i)->JournalIdentifier().GetText());
			//break;;
		}

	}
	return res;

}

char* getFeatureName(char name[])
{

	char res[100];
	char temp[50];
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	Part *thePart = theSession->Parts()->Work();

	NXOpen::Features::FeatureCollection::iterator i;

	for (i =thePart->Features()->begin(); i!=thePart->Features()->end(); i++)
	{
		//NXOpen::UI::GetUI()->NXMessageBox()->Show("hhahahhaha",NXMessageBox::DialogTypeInformation,(*i)->Name().GetText());
		if (strstr((*i)->Name().GetText(),name))
		{
			strcpy(temp,(*i)->GetFeatureName().getText());
			//break;;
		}

	}

	int length = strlen(temp);
	memset(res,0,sizeof(res));
	for (int i=0; i<length; i++)
	{
		if (temp[i] != ':')
		{
			res[i] = temp[i];
		}
		else
		{
			break;
		}
	}

	return res;

}


//建立开始草图
void createSketch()
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());

	UI *myUI = UI::GetUI();
	NXMessageBox *messageBox = myUI->NXMessageBox();


	// ----------------------------------------------
	//   Menu: Insert->Sketch...
	// ----------------------------------------------

	Sketch *nullSketch(NULL);
	SketchInPlaceBuilder *sketchInPlaceBuilder1;
	sketchInPlaceBuilder1 = workPart->Sketches()->CreateNewSketchInPlaceBuilder(nullSketch);

	Unit *unit1(dynamic_cast<Unit *>(workPart->UnitCollection()->FindObject("MilliMeter")));
	SketchAlongPathBuilder *sketchAlongPathBuilder1;
	sketchAlongPathBuilder1 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullSketch);

	sketchAlongPathBuilder1->PlaneLocation()->Expression()->SetRightHandSide("0");


	theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);

	theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);

	theSession->Preferences()->Sketch()->SetDimensionLabel(Preferences::SketchPreferences::DimensionLabelTypeExpression);

	theSession->Preferences()->Sketch()->SetTextSizeFixed(true);

	theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);

	theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);

	theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);

	NXObject *nXObject1;
	nXObject1 = sketchInPlaceBuilder1->Commit();

	Sketch *sketch1(dynamic_cast<Sketch *>(nXObject1));
	Features::Feature *feature1;
	feature1 = sketch1->Feature();
	feature1->SetName("mainSketch");
	sketch1->Activate(Sketch::ViewReorientTrue);
	//drawCircle(0,0,0);

	sketchInPlaceBuilder1->Destroy();
	sketchAlongPathBuilder1->Destroy();
}

//在平面上建矩形，要求同一高度 ，即z相同
void createRect(double leftUpX,double leftUpY,double rightDownX,double rightDownY,double z)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());

	// ----------------------------------------------
	// Creating rectangle using By 2 Points method 
	// ----------------------------------------------

	Point3d startPoint1(leftUpX, leftUpY, z);
	Point3d endPoint1(rightDownX, leftUpY,z);
	Line *line1;
	line1 = workPart->Curves()->CreateLine(startPoint1, endPoint1);

	Point3d startPoint2(leftUpX, leftUpY, z);
	Point3d endPoint2(leftUpX, rightDownY, z);
	Line *line2;

	line2 = workPart->Curves()->CreateLine(startPoint2, endPoint2);

	Point3d startPoint3(rightDownX,rightDownY,z);
	Point3d endPoint3(leftUpX,rightDownY,z);
	Line *line3;
	line3 = workPart->Curves()->CreateLine(startPoint3, endPoint3);

	Point3d startPoint4(rightDownX,rightDownY,z);
	Point3d endPoint4(rightDownX,leftUpY,z);
	Line *line4;
	line4 = workPart->Curves()->CreateLine(startPoint4, endPoint4);

	theSession->ActiveSketch()->AddGeometry(line1, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line2, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line3, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line4, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);
}

//在平面上建矩形，要求同y 
void createRect(double leftUpX,double leftUpZ,double rightDownX,double rightDownZ,double y,int id)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());

	// ----------------------------------------------
	// Creating rectangle using By 2 Points method 
	// ----------------------------------------------

	Point3d startPoint1(leftUpX, y, leftUpZ);
	Point3d endPoint1(rightDownX,y, leftUpZ);
	Line *line1;
	line1 = workPart->Curves()->CreateLine(startPoint1, endPoint1);

	Point3d startPoint2(leftUpX, y, leftUpZ);
	Point3d endPoint2(leftUpX, y, rightDownZ);
	Line *line2;

	line2 = workPart->Curves()->CreateLine(startPoint2, endPoint2);

	Point3d startPoint3(rightDownX,y,rightDownZ);
	Point3d endPoint3(leftUpX,y,rightDownZ);
	Line *line3;
	line3 = workPart->Curves()->CreateLine(startPoint3, endPoint3);

	Point3d startPoint4(rightDownX,y,rightDownZ);
	Point3d endPoint4(rightDownX,y,leftUpZ);
	Line *line4;
	line4 = workPart->Curves()->CreateLine(startPoint4, endPoint4);

	theSession->ActiveSketch()->AddGeometry(line1, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line2, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line3, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->AddGeometry(line4, Sketch::InferConstraintsOptionInferNoConstraints);

	theSession->ActiveSketch()->Update();

	theSession->Preferences()->Sketch()->SetAutoDimensionsToArcCenter(true);
}

//在拉伸体上建立平面 x表示拉伸体序号

void createPlane(int x)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Datum/Point->Datum Plane...
	// ----------------------------------------------

	Features::Feature *nullFeatures_Feature(NULL);

	if ( !workPart->Preferences()->Modeling()->GetHistoryMode() )
	{
		throw NXException::Create("Create or edit of a Feature was recorded in History Mode but playback is in History-Free Mode.");
	}

	Features::DatumPlaneBuilder *datumPlaneBuilder1;
	datumPlaneBuilder1 = workPart->Features()->CreateDatumPlaneBuilder(nullFeatures_Feature);

	Plane *plane1;
	plane1 = datumPlaneBuilder1->GetPlane();

	plane1->SetUpdateOption(SmartObject::UpdateOptionWithinModeling);

	plane1->SetMethod(PlaneTypes::MethodTypeDistance);

	//只需要修改EXTRUDE(X)就可以 X代表数字
	char s[11] = "EXTRUDE(";
	s[8] = (x + '0');
	s[9] = ')';
	char temp[36] = "FACE 130 {(11.5,-11,8) EXTRUDE(";
	temp[31] = (x + '0');
	temp[32] = ')';
	temp[33] = '}';

	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject(s)));
	Face *face1(dynamic_cast<Face *>(extrude1->FindObject(temp)));

	std::vector<NXObject *> geom2(1);
	geom2[0] = face1;
	plane1->SetGeometry(geom2);

	plane1->SetFlip(false);

	plane1->SetReverseSide(false);

	plane1->SetAlternate(PlaneTypes::AlternateTypeOne);

	plane1->RemoveOffsetData();

	plane1->Evaluate();

	datumPlaneBuilder1->SetResizeDuringUpdate(true);

	UI *plmHomeUI = UI::GetUI();

	NXMessageBox *messageBox = plmHomeUI->NXMessageBox();

	//messageBox->Show("提示",NXMessageBox::DialogTypeQuestion,"1");

	Features::Feature *feature1;
	feature1 = datumPlaneBuilder1->CommitFeature();
	//messageBox->Show("提示",NXMessageBox::DialogTypeQuestion,"222");

	datumPlaneBuilder1->Destroy();
}

//在一个拉伸体上建立草图
//120 130 140分别代表不同的面 要注意
void createSketchOnExtrude(char targetExtrude[],char *str1,char *str2,char setName[])
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Sketch...
	// ----------------------------------------------

	Sketch *nullSketch(NULL);
	SketchInPlaceBuilder *sketchInPlaceBuilder1;
	sketchInPlaceBuilder1 = workPart->Sketches()->CreateNewSketchInPlaceBuilder(nullSketch);

	SketchAlongPathBuilder *sketchAlongPathBuilder1;
	sketchAlongPathBuilder1 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullSketch);

	sketchAlongPathBuilder1->PlaneLocation()->Expression()->SetRightHandSide("0");

	Scalar *scalar1;
	scalar1 = workPart->Scalars()->CreateScalar(1.0, Scalar::DimensionalityTypeNone, SmartObject::UpdateOptionWithinModeling);

	// 	char str[20] = "EXTRUDE(";
	// 	str[8] = (extrudeNum + '0');
	// 	str[9] = ')';
	char* sketch = getJournalId(targetExtrude);

	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject(sketch)));
	Edge *edge1(dynamic_cast<Edge *>(extrude1->FindObject(str1)));


	Face *face1(dynamic_cast<Face *>(extrude1->FindObject(str2)));
	Point3d point2(6.07069932873057, -4.5, 0.54146852704205);
	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(face1, workPart->ModelingViews()->WorkView(), point2);


	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(NULL);

	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(face1);

	sketchInPlaceBuilder1->Axis()->SetValue(edge1);

	theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);

	theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);

	theSession->Preferences()->Sketch()->SetDimensionLabel(Preferences::SketchPreferences::DimensionLabelTypeExpression);

	theSession->Preferences()->Sketch()->SetTextSizeFixed(true);

	theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);

	theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);

	theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);

	NXObject *nXObject1;
	nXObject1 = sketchInPlaceBuilder1->Commit();

	Sketch *sketch1(dynamic_cast<Sketch *>(nXObject1));
	//sketch1->SetName(setName);
	Features::Feature *feature1;
	feature1 = sketch1->Feature();
	feature1->SetName(setName);

	sketch1->Activate(Sketch::ViewReorientTrue);

	sketchInPlaceBuilder1->Destroy();

	sketchAlongPathBuilder1->Destroy();

	//drawCircle(-3.67140699961652, 0.31469202853856, 8.0);
	//theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
}

void createSketchOnExtrude(char targetExtrude[],char *str1,char *str2,char setName[],bool isReverse)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Sketch...
	// ----------------------------------------------

	Sketch *nullSketch(NULL);
	SketchInPlaceBuilder *sketchInPlaceBuilder1;
	sketchInPlaceBuilder1 = workPart->Sketches()->CreateNewSketchInPlaceBuilder(nullSketch);

	SketchAlongPathBuilder *sketchAlongPathBuilder1;
	sketchAlongPathBuilder1 = workPart->Sketches()->CreateSketchAlongPathBuilder(nullSketch);

	sketchAlongPathBuilder1->PlaneLocation()->Expression()->SetRightHandSide("0");

	Scalar *scalar1;
	scalar1 = workPart->Scalars()->CreateScalar(1.0, Scalar::DimensionalityTypeNone, SmartObject::UpdateOptionWithinModeling);

	// 	char str[20] = "EXTRUDE(";
	// 	str[8] = (extrudeNum + '0');
	// 	str[9] = ')';
	char* sketch = getJournalId(targetExtrude);

	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject(sketch)));
	Edge *edge1(dynamic_cast<Edge *>(extrude1->FindObject(str1)));


	Face *face1(dynamic_cast<Face *>(extrude1->FindObject(str2)));
	Point3d point2(6.07069932873057, -4.5, 0.54146852704205);
	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(face1, workPart->ModelingViews()->WorkView(), point2);


	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(NULL);

	sketchInPlaceBuilder1->PlaneOrFace()->SetValue(face1);

	sketchInPlaceBuilder1->Axis()->SetValue(edge1);

	theSession->Preferences()->Sketch()->SetCreateInferredConstraints(true);

	theSession->Preferences()->Sketch()->SetContinuousAutoDimensioning(true);

	theSession->Preferences()->Sketch()->SetDimensionLabel(Preferences::SketchPreferences::DimensionLabelTypeExpression);

	theSession->Preferences()->Sketch()->SetTextSizeFixed(true);

	theSession->Preferences()->Sketch()->SetFixedTextSize(3.0);

	theSession->Preferences()->Sketch()->SetConstraintSymbolSize(3.0);

	theSession->Preferences()->Sketch()->SetDisplayObjectColor(false);

	if (isReverse == true)
	{
		sketchInPlaceBuilder1->SetReversePlaneNormal(true);
	}

	NXObject *nXObject1;
	nXObject1 = sketchInPlaceBuilder1->Commit();

	Sketch *sketch1(dynamic_cast<Sketch *>(nXObject1));
	//sketch1->SetName(setName);
	Features::Feature *feature1;
	feature1 = sketch1->Feature();
	feature1->SetName(setName);

	sketch1->Activate(Sketch::ViewReorientTrue);

	sketchInPlaceBuilder1->Destroy();

	sketchAlongPathBuilder1->Destroy();

	//drawCircle(-3.67140699961652, 0.31469202853856, 8.0);
	//theSession->ActiveSketch()->Deactivate(Sketch::ViewReorientFalse, Sketch::UpdateLevelModel);
}

void fanxianglashen(char targetSketchName[],char targetExtrueName[],int length,char setName[])
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Design Feature->Extrude...
	// ----------------------------------------------

	Features::Feature *nullFeatures_Feature(NULL);

	if ( !workPart->Preferences()->Modeling()->GetHistoryMode() )
	{
		throw NXException::Create("Create or edit of a Feature was recorded in History Mode but playback is in History-Free Mode.");
	}

	Features::ExtrudeBuilder *extrudeBuilder1;
	extrudeBuilder1 = workPart->Features()->CreateExtrudeBuilder(nullFeatures_Feature);

	Section *section1;
	section1 = workPart->Sections()->CreateSection(0.00095, 0.001, 0.05);

	extrudeBuilder1->SetSection(section1);

	extrudeBuilder1->AllowSelfIntersectingSection(true);

	extrudeBuilder1->SetDistanceTolerance(0.001);

	extrudeBuilder1->Limits()->StartExtend()->Value()->SetRightHandSide("0");

	char changdu[3] = "";
	sprintf(changdu,"%d",length);
	extrudeBuilder1->Limits()->EndExtend()->Value()->SetRightHandSide(changdu);

	extrudeBuilder1->Draft()->FrontDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Draft()->BackDraftAngle()->SetRightHandSide("2");

	extrudeBuilder1->Offset()->StartOffset()->SetRightHandSide("0");

	extrudeBuilder1->Offset()->EndOffset()->SetRightHandSide("5");

	section1->SetDistanceTolerance(0.001);

	section1->SetChainingTolerance(0.00095);

	section1->SetAllowedEntityTypes(Section::AllowTypesOnlyCurves);

	std::vector<Features::Feature *> features1(1);
	char* sketch = getJournalId(targetSketchName);
	//NXOpen::UI::GetUI()->NXMessageBox()->Show("hhahahhaha",NXMessageBox::DialogTypeInformation,extrudeName);
	Features::SketchFeature *sketchFeature1(dynamic_cast<Features::SketchFeature *>(workPart->Features()->FindObject(sketch)));//"SKETCH(4)"
	features1[0] = sketchFeature1;
	CurveFeatureRule *curveFeatureRule1;
	curveFeatureRule1 = workPart->ScRuleFactory()->CreateRuleCurveFeature(features1);

	section1->AllowSelfIntersection(true);

	std::vector<SelectionIntentRule *> rules1(1);
	rules1[0] = curveFeatureRule1;
	char* str = getFeatureName(targetSketchName);
	Sketch *sketch1(dynamic_cast<Sketch *>(workPart->Sketches()->FindObject(str)));//"SKETCH_001"
	//拉伸圆用Curve ArcX 拉伸矩形用Curve LineX x代表矩形线编号
	std::vector<NXOpen::NXObject *>s = sketch1->GetAllGeometry();

	const char* temp;
	if (s.size() > 0)
	{
		temp = s[0]->Name().getText();
	}

	char lineName[50] = "Curve ";
	strcat(lineName,temp);
	Arc *arc1(dynamic_cast<Arc *>(sketch1->FindObject(lineName)));//"Curve Arc2"
	NXObject *nullNXObject(NULL);
	Point3d helpPoint1(-1.99886248178789, 2.66552710079727, 8.0);
	section1->AddToSection(rules1, arc1, nullNXObject, nullNXObject, helpPoint1, Section::ModeCreate, false);

	Direction *direction1;
	direction1 = workPart->Directions()->CreateDirection(sketch1, SenseForward, SmartObject::UpdateOptionWithinModeling);
	char* sketch2 = getJournalId(targetExtrueName);
	Body *body1(dynamic_cast<Body *>(workPart->Bodies()->FindObject(sketch2)));//"EXTRUDE(2)"

	bool success1;
	success1 = direction1->ReverseDirection();

	extrudeBuilder1->SetDirection(direction1);


	std::vector<Body *> targetBodies(1);
	targetBodies[0] = body1;
	extrudeBuilder1->BooleanOperation()->SetTargetBodies(targetBodies);

	extrudeBuilder1->BooleanOperation()->SetType(GeometricUtilities::BooleanOperation::BooleanTypeSubtract);

	extrudeBuilder1->SetParentFeatureInternal(false);

	Features::Feature *feature1;
	try{

		feature1 = extrudeBuilder1->CommitFeature();
	}
	catch(NXException &ex)
	{

		NXOpen::UI::GetUI()->NXMessageBox()->Show("fanxiang",NXMessageBox::DialogTypeWarning,ex.GetMessage());
	}
	feature1->SetName(setName);

	extrudeBuilder1->Destroy();
}


void drawCircle(double x,double y,double z,double r)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Sketch Curve->Circle...
	// ----------------------------------------------

	UI *myUi = UI::GetUI();
	NXMessageBox *message = myUi->NXMessageBox();

	NXMatrix *nXMatrix1;

	Point3d center1(x, y,z);
	Arc *arc1;
	try
	{

		nXMatrix1 = theSession->ActiveSketch()->Orientation();
		arc1 = workPart->Curves()->CreateArc(center1, nXMatrix1, r, 0.0, ( 360.0 * DEGRA ));
		theSession->ActiveSketch()->AddGeometry(arc1, Sketch::InferConstraintsOptionInferNoConstraints);
	}
	catch(NXException &ex)
	{
		message->Show("提示",NXMessageBox::DialogTypeQuestion,ex.GetMessage());
	}

	


	theSession->ActiveSketch()->Update();
}

//撤销
void unDo()
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	UI *myUI = UI::GetUI();
	NXMessageBox * message = myUI->NXMessageBox();
	message->Show("提示",NXMessageBox::DialogTypeQuestion,"撤销？");

	bool marksRecycled1;
	bool undoUnavailable1;
	theSession->UndoLastNVisibleMarks(1, &marksRecycled1, &undoUnavailable1);
}


void createSemiCircle()
{

	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Sketch Curve->Arc...
	// ----------------------------------------------
	UI *myUI = UI::GetUI();
	NXMessageBox *message = myUI->NXMessageBox();

	Matrix3x3 rotMatrix1;
	rotMatrix1.Xx = -0.989556958342294;
	rotMatrix1.Xy = 0.0343967540730897;
	rotMatrix1.Xz = 0.139978175104487;
	rotMatrix1.Yx = -0.0462319999475298;
	rotMatrix1.Yy = -0.995543222204296;
	rotMatrix1.Yz = -0.0821966842636555;
	rotMatrix1.Zx = 0.136527024347558;
	rotMatrix1.Zy = -0.0878097718498508;
	rotMatrix1.Zz = 0.986736953595272;
	Point3d translation1(5.1090801986362, -1.70489686238538, -4.73473703374149);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix1, translation1, 2.61816567758389);

	Point3d scaleAboutPoint1(-27.3358528375153, -18.796556849456, 0.0);
	Point3d viewCenter1(27.3358528375153, 18.796556849456, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint1, viewCenter1);

	Point3d scaleAboutPoint2(-21.9495276758163, -15.1180908853689, 0.0);
	Point3d viewCenter2(21.9495276758163, 15.1180908853689, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint2, viewCenter2);

	Point3d scaleAboutPoint3(-17.5596221406531, -12.0944727082951, 0.0);
	Point3d viewCenter3(17.5596221406531, 12.0944727082951, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint3, viewCenter3);

	Point3d scaleAboutPoint4(-14.0476977125225, -9.72731922635073, 0.0);
	Point3d viewCenter4(14.0476977125225, 9.72731922635073, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint4, viewCenter4);

	Session::UndoMarkId markId2;
	markId2 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Curve");

	Point3d scaleAboutPoint5(-12.0660151254521, -7.53349829445035, 0.0);
	Point3d viewCenter5(12.0660151254521, 7.53349829445035, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint5, viewCenter5);

	Point3d scaleAboutPoint6(-15.0825189068151, -9.41687286806294, 0.0);
	Point3d viewCenter6(15.0825189068151, 9.41687286806294, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint6, viewCenter6);

	Point3d scaleAboutPoint7(-18.8531486335189, -11.7710910850787, 0.0);
	Point3d viewCenter7(18.8531486335189, 11.7710910850787, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint7, viewCenter7);

	Point3d scaleAboutPoint8(-24.7791168789603, 10.9141297835551, 0.0);
	Point3d viewCenter8(24.7791168789603, -10.9141297835551, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint8, viewCenter8);

	Matrix3x3 rotMatrix2;
	rotMatrix2.Xx = -0.988872691888411;
	rotMatrix2.Xy = 0.021685601939093;
	rotMatrix2.Xz = 0.147175181011972;
	rotMatrix2.Yx = 0.0422285411277977;
	rotMatrix2.Yy = -0.907704146568992;
	rotMatrix2.Yz = 0.417480457765002;
	rotMatrix2.Zx = 0.142644837101051;
	rotMatrix2.Zy = 0.419050017265239;
	rotMatrix2.Zz = 0.896688091522586;
	Point3d translation2(3.44848009622956, -5.00299627124541, -2.93375746459354);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix2, translation2, 2.61816567758389);

	Point3d scaleAboutPoint9(-29.6601582543835, 12.9352649286579, 0.0);
	Point3d viewCenter9(29.6601582543835, -12.9352649286579, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint9, viewCenter9);

	Point3d scaleAboutPoint10(-23.7281266035068, 10.2673665371222, 0.0);
	Point3d viewCenter10(23.7281266035068, -10.2673665371222, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint10, viewCenter10);

	Point3d scaleAboutPoint11(-18.9825012828054, 8.21389322969776, 0.0);
	Point3d viewCenter11(18.9825012828054, -8.21389322969776, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint11, viewCenter11);

	Point3d scaleAboutPoint12(-15.1860010262444, 6.57111458375821, 0.0);
	Point3d viewCenter12(15.1860010262444, -6.57111458375821, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint12, viewCenter12);

	Point3d scaleAboutPoint13(-12.1074079732238, 5.21549881923486, 0.0);
	Point3d viewCenter13(12.1074079732238, -5.21549881923487, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint13, viewCenter13);

	Point3d scaleAboutPoint14(-10.9442689508389, -3.07962787421487, 0.0);
	Point3d viewCenter14(10.9442689508389, 3.07962787421486, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint14, viewCenter14);

	Point3d scaleAboutPoint15(-13.6803361885486, -3.84953484276859, 0.0);
	Point3d viewCenter15(13.6803361885486, 3.84953484276858, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint15, viewCenter15);

	Point3d scaleAboutPoint16(-17.1004202356857, -4.81191855346073, 0.0);
	Point3d viewCenter16(17.1004202356857, 4.81191855346073, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint16, viewCenter16);

	Point3d scaleAboutPoint17(-21.3755252946071, -6.01489819182591, 0.0);
	Point3d viewCenter17(21.3755252946071, 6.01489819182591, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint17, viewCenter17);

	Point3d scaleAboutPoint18(-41.271579662999, -12.6927287112455, 0.0);
	Point3d viewCenter18(41.271579662999, 12.6927287112455, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.953125, scaleAboutPoint18, viewCenter18);

	Point3d scaleAboutPoint19(-21.1310487874555, -6.49867710015771, 0.0);
	Point3d viewCenter19(21.1310487874555, 6.49867710015771, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint19, viewCenter19);

	Matrix3x3 rotMatrix3;
	rotMatrix3.Xx = -0.998999381023808;
	rotMatrix3.Xy = -0.0446903936615806;
	rotMatrix3.Xz = -0.00173361714993692;
	rotMatrix3.Yx = 0.0405933916837791;
	rotMatrix3.Yy = -0.922322849291598;
	rotMatrix3.Yz = 0.384282107606165;
	rotMatrix3.Zx = -0.018772673375332;
	rotMatrix3.Zy = 0.383827214237086;
	rotMatrix3.Zz = 0.923214090200827;
	Point3d translation3(33.055238461055, -10.3781366463612, 4.89665937423816);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix3, translation3, 7.99000756098599);

	Point3d scaleAboutPoint20(-16.871724751747, -5.43074162764772, 0.0);
	Point3d viewCenter20(16.871724751747, 5.43074162764772, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint20, viewCenter20);

	Point3d scaleAboutPoint21(-21.0896559396838, -6.78842703455965, 0.0);
	Point3d viewCenter21(21.0896559396838, 6.78842703455965, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint21, viewCenter21);

	Point3d scaleAboutPoint22(-26.3620699246047, -8.48553379319957, 0.0);
	Point3d viewCenter22(26.3620699246048, 8.48553379319956, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint22, viewCenter22);

	Point3d scaleAboutPoint23(-32.9525874057559, -10.6069172414995, 0.0);
	Point3d viewCenter23(32.9525874057559, 10.6069172414994, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint23, viewCenter23);

	Matrix3x3 rotMatrix4;
	rotMatrix4.Xx = -0.998553495159358;
	rotMatrix4.Xy = -0.0471766599269967;
	rotMatrix4.Xz = -0.0257930235366434;
	rotMatrix4.Yx = 0.0499451007695154;
	rotMatrix4.Yy = -0.991509267203771;
	rotMatrix4.Yz = -0.120061900527037;
	rotMatrix4.Zx = -0.019909902414434;
	rotMatrix4.Zy = -0.121176465566436;
	rotMatrix4.Zz = 0.992431287283243;
	Point3d translation4(9.21741769040007, -8.11914868242721, 3.51231368794456);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix4, translation4, 3.27270709697986);

	Point3d scaleAboutPoint24(-41.1098888513908, -8.65045842103996, 0.0);
	Point3d viewCenter24(41.1098888513908, 8.65045842103995, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint24, viewCenter24);

	Point3d scaleAboutPoint25(-32.8879110811126, -6.92036673683196, 0.0);
	Point3d viewCenter25(32.8879110811127, 6.92036673683196, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.953125, scaleAboutPoint25, viewCenter25);

	theSession->SetUndoMarkVisibility(markId2, "Curve", Session::MarkVisibilityVisible);

	NXMatrix *nXMatrix1;
	nXMatrix1 = theSession->ActiveSketch()->Orientation();

	Point3d center1(35.047450090415, 0.0, 5.0);
	Arc *arc1;
	arc1 = workPart->Curves()->CreateArc(center1, nXMatrix1, 15.0000750501816, ( 89.8187546100026 * DEGRA ), ( 270.181245389997 * DEGRA ));

	theSession->ActiveSketch()->AddGeometry(arc1, Sketch::InferConstraintsOptionInferNoConstraints);

	Sketch::ConstraintGeometry geom1_1;
	geom1_1.Geometry = arc1;
	geom1_1.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom1_1.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_1;
	//message->Show("11111",NXMessageBox::DialogTypeWarning,"111111");
	Sketch *sketch1(dynamic_cast<Sketch *>(workPart->Sketches()->FindObject("SKETCH_001")));
	//message->Show("11111",NXMessageBox::DialogTypeWarning,"222222");
// 	char* str = getFeatureName(targetSketchName);
// 	Sketch *sketch1(dynamic_cast<Sketch *>(workPart->Sketches()->FindObject(str)));
	//拉伸圆用Curve ArcX 拉伸矩形用Curve LineX x代表矩形线编号
	std::vector<NXOpen::NXObject *>s = sketch1->GetAllGeometry();

	const char* temp;
	if (s.size() > 0)
	{
		temp = s[0]->Name().getText();
	}

	char lineName[50] = "Curve ";
	strcat(lineName,temp);
	Line *line1(dynamic_cast<Line *>(sketch1->FindObject(lineName)));
	//message->Show("11111",NXMessageBox::DialogTypeWarning,lineName);
	geom2_1.Geometry = line1;
	geom2_1.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom2_1.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint1;
	sketchGeometricConstraint1 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_1, geom2_1);

	Sketch::ConstraintGeometry geom1_2;
	geom1_2.Geometry = arc1;
	geom1_2.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom1_2.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_2;
	Sketch *sketch2(dynamic_cast<Sketch *>(workPart->Sketches()->FindObject("SKETCH_002")));
	std::vector<NXOpen::NXObject *>s2 = sketch2->GetAllGeometry();

	const char* temp2;
	if (s2.size() > 0)
	{
		temp2 = s2[0]->Name().getText();
	}

	char lineName2[50] = "Curve ";
	strcat(lineName2,temp2);
	Line *line2(dynamic_cast<Line *>(sketch2->FindObject(lineName2)));
	geom2_2.Geometry = line2;
	geom2_2.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom2_2.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint2;
	sketchGeometricConstraint2 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_2, geom2_2);

	Sketch::ConstraintGeometry conGeom1_1;
	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject("EXTRUDE(2)")));
	Edge *edge1(dynamic_cast<Edge *>(extrude1->FindObject("EDGE * 130 * 140 {(50,-20,5)(50,0,5)(50,20,5) EXTRUDE(2)}")));
	conGeom1_1.Geometry = edge1;
	conGeom1_1.PointType = Sketch::ConstraintPointTypeNone;
	conGeom1_1.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry conGeom2_1;
	conGeom2_1.Geometry = arc1;
	conGeom2_1.PointType = Sketch::ConstraintPointTypeNone;
	conGeom2_1.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometryHelp help1;
	help1.Type = Sketch::ConstraintGeometryHelpTypePoint;
	help1.Point.X = 50.0;
	help1.Point.Y = -1.19310632906251;
	help1.Point.Z = 5.0;
	help1.Parameter = 0.0;
	SketchHelpedGeometricConstraint *sketchHelpedGeometricConstraint1;
	try
	{
		// 输入对象不是有效顶点
		sketchHelpedGeometricConstraint1 = theSession->ActiveSketch()->CreatePointOnCurveConstraint(conGeom1_1, conGeom2_1, help1);
	}
	catch (const NXException &ex)
	{
		ex.AssertErrorCode(910035);
	}

	Sketch::DimensionGeometry dimObject1_1;
	dimObject1_1.Geometry = arc1;
	dimObject1_1.AssocType = Sketch::AssocTypeMidpoint;
	dimObject1_1.AssocValue = 0;
	dimObject1_1.HelpPoint.X = 0.0;
	dimObject1_1.HelpPoint.Y = 0.0;
	dimObject1_1.HelpPoint.Z = 0.0;
	NXObject *nullNXObject(NULL);
	dimObject1_1.View = nullNXObject;
	Point3d dimOrigin1(42.3959245980661, 1.54643533461187, 5.0);
	Expression *nullExpression(NULL);
	SketchDimensionalConstraint *sketchDimensionalConstraint1;
	sketchDimensionalConstraint1 = theSession->ActiveSketch()->CreateRadialDimension(dimObject1_1, dimOrigin1, nullExpression, Sketch::DimensionOptionCreateAsAutomatic);

	Annotations::Dimension *dimension1;
	dimension1 = sketchDimensionalConstraint1->AssociatedDimension();

	Expression *expression1;
	expression1 = sketchDimensionalConstraint1->AssociatedExpression();

	theSession->ActiveSketch()->Update();

	// ----------------------------------------------
	//   Dialog Begin Arc
	// ----------------------------------------------
	Point3d scaleAboutPoint26(-19.3552956180493, -4.03994194251843, 0.0);
	Point3d viewCenter26(19.3552956180494, 4.03994194251842, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint26, viewCenter26);

	Point3d scaleAboutPoint27(-24.1941195225617, -5.04992742814804, 0.0);
	Point3d viewCenter27(24.1941195225617, 5.04992742814803, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint27, viewCenter27);

	Point3d scaleAboutPoint28(-30.2426494032021, -6.31240928518505, 0.0);
	Point3d viewCenter28(30.2426494032021, 6.31240928518504, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint28, viewCenter28);

	Point3d scaleAboutPoint29(-37.8033117540026, -7.89051160648131, 0.0);
	Point3d viewCenter29(37.8033117540027, 7.8905116064813, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint29, viewCenter29);

	Point3d scaleAboutPoint30(-47.2541396925033, -9.86313950810164, 0.0);
	Point3d viewCenter30(47.2541396925033, 9.86313950810163, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint30, viewCenter30);

	Point3d scaleAboutPoint31(-2.88011758177147, -4.95178110550184, 0.0);
	Point3d viewCenter31(2.8801175817715, 4.95178110550184, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint31, viewCenter31);

	Matrix3x3 rotMatrix5;
	rotMatrix5.Xx = -0.980107070871463;
	rotMatrix5.Xy = 0.038381147094;
	rotMatrix5.Xz = 0.194722924114009;
	rotMatrix5.Yx = 0.0946769142706199;
	rotMatrix5.Yy = -0.7718767595398;
	rotMatrix5.Yz = 0.628683187294309;
	rotMatrix5.Zx = 0.174431681560303;
	rotMatrix5.Zy = 0.634612602798027;
	rotMatrix5.Zz = 0.752888061293284;
	Point3d translation5(-11.3544748945468, -27.5148286083986, 8.29856857004311);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix5, translation5, 2.09453254206711);

	// ----------------------------------------------
	//   Menu: Insert->Sketch Curve->Profile...
	// ----------------------------------------------
	Session::UndoMarkId markId3;
	markId3 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Profile short list");

	Matrix3x3 rotMatrix6;
	rotMatrix6.Xx = -0.988239073432146;
	rotMatrix6.Xy = 0.0172173815331;
	rotMatrix6.Xz = 0.151944382966655;
	rotMatrix6.Yx = 0.0361389079927368;
	rotMatrix6.Yy = -0.939197745590719;
	rotMatrix6.Yz = 0.341469726339545;
	rotMatrix6.Zx = 0.148585036497846;
	rotMatrix6.Zy = 0.342944830038966;
	rotMatrix6.Zz = 0.927529692505032;
	Point3d translation6(-10.4987098665037, -21.7691619272026, 4.80634543940458);
	workPart->ModelingViews()->WorkView()->SetRotationTranslationScale(rotMatrix6, translation6, 2.09453254206711);

	Point3d scaleAboutPoint32(-45.7913431312351, -39.6647772226423, 0.0);
	Point3d viewCenter32(45.7913431312352, 39.6647772226423, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint32, viewCenter32);

	Point3d scaleAboutPoint33(-36.6330745049881, -31.7318217781139, 0.0);
	Point3d viewCenter33(36.6330745049881, 31.7318217781138, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint33, viewCenter33);

	Point3d scaleAboutPoint34(-29.3064596039905, -25.3854574224911, 0.0);
	Point3d viewCenter34(29.3064596039905, 25.3854574224911, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint34, viewCenter34);

	Point3d scaleAboutPoint35(-23.1217860599759, -22.572037300508, 0.0);
	Point3d viewCenter35(23.121786059976, 22.572037300508, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint35, viewCenter35);

	Point3d scaleAboutPoint36(-18.4974288479807, -18.0576298404064, 0.0);
	Point3d viewCenter36(18.4974288479808, 18.0576298404064, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint36, viewCenter36);

	Point3d scaleAboutPoint37(-14.7979430783846, -14.4461038723251, 0.0);
	Point3d viewCenter37(14.7979430783846, 14.4461038723251, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint37, viewCenter37);

	Session::UndoMarkId markId4;
	markId4 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Curve");

	theSession->SetUndoMarkVisibility(markId4, "Curve", Session::MarkVisibilityVisible);

	Point3d startPoint1(35.0, 15.0, 5.0);
	Point3d endPoint1(35.0, 20.0, 5.0);
	Line *line3;
	line3 = workPart->Curves()->CreateLine(startPoint1, endPoint1);

	theSession->ActiveSketch()->AddGeometry(line3, Sketch::InferConstraintsOptionInferNoConstraints);

	Sketch::ConstraintGeometry geom1_3;
	geom1_3.Geometry = line3;
	geom1_3.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom1_3.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_3;
	geom2_3.Geometry = arc1;
	geom2_3.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom2_3.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint3;
	sketchGeometricConstraint3 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_3, geom2_3);

	Sketch::ConstraintGeometry geom1;
	geom1.Geometry = line3;
	geom1.PointType = Sketch::ConstraintPointTypeNone;
	geom1.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint4;
	sketchGeometricConstraint4 = theSession->ActiveSketch()->CreateVerticalConstraint(geom1);

	Sketch::ConstraintGeometry geom1_4;
	geom1_4.Geometry = line3;
	geom1_4.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom1_4.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_4;
	Line *line4(dynamic_cast<Line *>(sketch1->FindObject("Curve Line184")));
	geom2_4.Geometry = line4;
	geom2_4.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom2_4.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint5;
	sketchGeometricConstraint5 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_4, geom2_4);

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(false);

	theSession->ActiveSketch()->Update();

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(true);

	Session::UndoMarkId markId5;
	markId5 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Curve");

	Point3d scaleAboutPoint38(-12.4344114706202, -7.28514120782012, 0.0);
	Point3d viewCenter38(12.4344114706203, 7.2851412078201, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint38, viewCenter38);

	Point3d scaleAboutPoint39(-15.5430143382753, -9.10642650977515, 0.0);
	Point3d viewCenter39(15.5430143382753, 9.10642650977513, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint39, viewCenter39);

	Point3d scaleAboutPoint40(-19.4287679228441, -11.3830331372189, 0.0);
	Point3d viewCenter40(19.4287679228442, 11.3830331372189, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint40, viewCenter40);

	Point3d scaleAboutPoint41(-24.2859599035551, -14.2287914215237, 0.0);
	Point3d viewCenter41(24.2859599035552, 14.2287914215237, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint41, viewCenter41);

	theSession->SetUndoMarkVisibility(markId5, "Curve", Session::MarkVisibilityVisible);

	Point3d startPoint2(35.0, 20.0, 5.0);
	Point3d endPoint2(50.0, 20.0, 5.0);
	Line *line5;
	line5 = workPart->Curves()->CreateLine(startPoint2, endPoint2);

	theSession->ActiveSketch()->AddGeometry(line5, Sketch::InferConstraintsOptionInferNoConstraints);

	Sketch::ConstraintGeometry geom1_5;
	geom1_5.Geometry = line5;
	geom1_5.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom1_5.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_5;
	geom2_5.Geometry = line3;
	geom2_5.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom2_5.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint6;
	sketchGeometricConstraint6 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_5, geom2_5);

	Sketch::ConstraintGeometry geom2;
	geom2.Geometry = line5;
	geom2.PointType = Sketch::ConstraintPointTypeNone;
	geom2.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint7;
	sketchGeometricConstraint7 = theSession->ActiveSketch()->CreateHorizontalConstraint(geom2);

	Sketch::ConstraintGeometry geom1_6;
	geom1_6.Geometry = line5;
	geom1_6.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom1_6.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_6;
	Edge *edge2(dynamic_cast<Edge *>(extrude1->FindObject("EDGE * 130 * 150 {(50,20,5)(0,20,5)(-50,20,5) EXTRUDE(2)}")));
	geom2_6.Geometry = edge2;
	geom2_6.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom2_6.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint8;
	sketchGeometricConstraint8 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_6, geom2_6);

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(false);

	theSession->ActiveSketch()->Update();

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(true);

	InferredConstraintsBuilder *inferredConstraintsBuilder1;
	inferredConstraintsBuilder1 = workPart->Sketches()->CreateInferredConstraintsBuilder();

	std::vector<Sketch::AutoDimensioningRule> rules1;
	rules1 = inferredConstraintsBuilder1->GetRules();

	std::vector<Sketch::AutoDimensioningRule> rules2(5);
	rules2[0] = Sketch::AutoDimensioningRuleSymmetric;
	rules2[1] = Sketch::AutoDimensioningRuleAdjacentAngle;
	rules2[2] = Sketch::AutoDimensioningRuleLength;
	rules2[3] = Sketch::AutoDimensioningRuleHorizontalVertical;
	rules2[4] = Sketch::AutoDimensioningRuleReferenceAxes;
	inferredConstraintsBuilder1->SetRules(rules2);

	inferredConstraintsBuilder1->SetHorizontal(true);

	inferredConstraintsBuilder1->SetVertical(true);

	inferredConstraintsBuilder1->SetTangent(true);

	inferredConstraintsBuilder1->SetParallel(true);

	inferredConstraintsBuilder1->SetPerpendicular(true);

	inferredConstraintsBuilder1->SetCollinear(true);

	inferredConstraintsBuilder1->SetConcentric(false);

	inferredConstraintsBuilder1->SetEqualLength(false);

	inferredConstraintsBuilder1->SetEqualRadius(false);

	inferredConstraintsBuilder1->SetDimensionalConstraint(true);

	inferredConstraintsBuilder1->SetPointOnCurve(true);

	inferredConstraintsBuilder1->SetCoincident(true);

	inferredConstraintsBuilder1->SetMidpoint(true);

	inferredConstraintsBuilder1->SetPointOnString(false);

	NXObject *nXObject1;
	nXObject1 = inferredConstraintsBuilder1->Commit();

	theSession->ActiveSketch()->Update();

	std::vector<Sketch::AutoDimensioningRule> rules3(5);
	rules3[0] = Sketch::AutoDimensioningRule(0);
	rules3[1] = Sketch::AutoDimensioningRule(0);
	rules3[2] = Sketch::AutoDimensioningRule(0);
	rules3[3] = Sketch::AutoDimensioningRule(0);
	rules3[4] = Sketch::AutoDimensioningRule(0);
	try
	{
		inferredConstraintsBuilder1->SetRules(rules3);
	}
	catch (const NXException &ex)
	{
		ex.AssertErrorCode(1);
	}

	NXObject *nXObject2;
	nXObject2 = inferredConstraintsBuilder1->Commit();

	inferredConstraintsBuilder1->Destroy();

	Session::UndoMarkId markId6;
	markId6 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Curve");

	Point3d scaleAboutPoint42(-43.9394780545347, -1.61690811608223, 0.0);
	Point3d viewCenter42(43.9394780545347, 1.61690811608223, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint42, viewCenter42);

	Point3d scaleAboutPoint43(-54.9243475681683, -2.0211351451028, 0.0);
	Point3d viewCenter43(54.9243475681684, 2.02113514510278, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint43, viewCenter43);

	Point3d scaleAboutPoint44(-68.5291135136415, -3.0317027176542, 0.0);
	Point3d viewCenter44(68.5291135136416, 3.03170271765418, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint44, viewCenter44);

	Point3d scaleAboutPoint45(-85.3455895256296, -4.73703549633468, 0.0);
	Point3d viewCenter45(85.3455895256297, 4.73703549633467, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(0.8, scaleAboutPoint45, viewCenter45);

	Point3d scaleAboutPoint46(-106.681986907037, -6.51342380746016, 0.0);
	Point3d viewCenter46(106.681986907037, 6.51342380746016, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint46, viewCenter46);

	Point3d scaleAboutPoint47(-85.3455895256296, -5.21073904596813, 0.0);
	Point3d viewCenter47(85.3455895256296, 5.21073904596813, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint47, viewCenter47);

	Point3d scaleAboutPoint48(-68.2764716205036, -4.16859123677449, 0.0);
	Point3d viewCenter48(68.2764716205037, 4.16859123677449, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint48, viewCenter48);

	Point3d scaleAboutPoint49(-54.6211772964029, -3.3348729894196, 0.0);
	Point3d viewCenter49(54.621177296403, 3.3348729894196, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint49, viewCenter49);

	Point3d scaleAboutPoint50(-43.5352510255141, -2.82958920314391, 0.0);
	Point3d viewCenter50(43.5352510255142, 2.82958920314391, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint50, viewCenter50);

	Point3d scaleAboutPoint51(-34.8282008204113, -2.26367136251513, 0.0);
	Point3d viewCenter51(34.8282008204114, 2.26367136251513, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint51, viewCenter51);

	Point3d scaleAboutPoint52(-27.862560656329, -1.8109370900121, 0.0);
	Point3d viewCenter52(27.8625606563291, 1.8109370900121, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint52, viewCenter52);

	Point3d scaleAboutPoint53(-22.2900485250632, -1.44874967200968, 0.0);
	Point3d viewCenter53(22.2900485250633, 1.44874967200968, 0.0);
	workPart->ModelingViews()->WorkView()->ZoomAboutPoint(1.25, scaleAboutPoint53, viewCenter53);

	theSession->SetUndoMarkVisibility(markId6, "Curve", Session::MarkVisibilityVisible);

	Point3d startPoint3(50.0, 20.0, 5.0);
	Point3d endPoint3(50.0474827154395, 0.0356757519998754, 5.0);
	Line *line6;
	line6 = workPart->Curves()->CreateLine(startPoint3, endPoint3);

	theSession->ActiveSketch()->AddGeometry(line6, Sketch::InferConstraintsOptionInferNoConstraints);

	Sketch::ConstraintGeometry geom1_7;
	geom1_7.Geometry = line6;
	geom1_7.PointType = Sketch::ConstraintPointTypeStartVertex;
	geom1_7.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry geom2_7;
	geom2_7.Geometry = line5;
	geom2_7.PointType = Sketch::ConstraintPointTypeEndVertex;
	geom2_7.SplineDefiningPointIndex = 0;
	SketchGeometricConstraint *sketchGeometricConstraint9;
	sketchGeometricConstraint9 = theSession->ActiveSketch()->CreateCoincidentConstraint(geom1_7, geom2_7);

	Sketch::ConstraintGeometry conGeom1_2;
	conGeom1_2.Geometry = line6;
	conGeom1_2.PointType = Sketch::ConstraintPointTypeEndVertex;
	conGeom1_2.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometry conGeom2_2;
	conGeom2_2.Geometry = arc1;
	conGeom2_2.PointType = Sketch::ConstraintPointTypeNone;
	conGeom2_2.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometryHelp help2;
	help2.Type = Sketch::ConstraintGeometryHelpTypePoint;
	help2.Point.X = 50.0474827154395;
	help2.Point.Y = 0.0356757519998754;
	help2.Point.Z = 5.0;
	help2.Parameter = 0.0;
	SketchHelpedGeometricConstraint *sketchHelpedGeometricConstraint2;
	sketchHelpedGeometricConstraint2 = theSession->ActiveSketch()->CreatePointOnCurveConstraint(conGeom1_2, conGeom2_2, help2);

	Sketch::ConstraintGeometry geom1_8;
	geom1_8.Geometry = line6;
	geom1_8.PointType = Sketch::ConstraintPointTypeNone;
	geom1_8.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometryHelp geom1Help1;
	geom1Help1.Type = Sketch::ConstraintGeometryHelpTypePoint;
	geom1Help1.Point.X = 50.0474827154395;
	geom1Help1.Point.Y = 0.0356757519998754;
	geom1Help1.Point.Z = 5.0;
	geom1Help1.Parameter = 0.0;
	Sketch::ConstraintGeometry geom2_8;
	geom2_8.Geometry = arc1;
	geom2_8.PointType = Sketch::ConstraintPointTypeNone;
	geom2_8.SplineDefiningPointIndex = 0;
	Sketch::ConstraintGeometryHelp geom2Help1;
	geom2Help1.Type = Sketch::ConstraintGeometryHelpTypePoint;
	geom2Help1.Point.X = 50.0474827154395;
	geom2Help1.Point.Y = 0.0356757519998754;
	geom2Help1.Point.Z = 5.0;
	geom2Help1.Parameter = 0.0;
	SketchTangentConstraint *sketchTangentConstraint1;
	sketchTangentConstraint1 = theSession->ActiveSketch()->CreateTangentConstraint(geom1_8, geom1Help1, geom2_8, geom2Help1);

	Sketch::DimensionGeometry dimObject1_2;
	dimObject1_2.Geometry = line6;
	dimObject1_2.AssocType = Sketch::AssocTypeStartPoint;
	dimObject1_2.AssocValue = 0;
	dimObject1_2.HelpPoint.X = 0.0;
	dimObject1_2.HelpPoint.Y = 0.0;
	dimObject1_2.HelpPoint.Z = 0.0;
	dimObject1_2.View = nullNXObject;
	Sketch::DimensionGeometry dimObject2_1;
	dimObject2_1.Geometry = line6;
	dimObject2_1.AssocType = Sketch::AssocTypeEndPoint;
	dimObject2_1.AssocValue = 0;
	dimObject2_1.HelpPoint.X = 0.0;
	dimObject2_1.HelpPoint.Y = 0.0;
	dimObject2_1.HelpPoint.Z = 0.0;
	dimObject2_1.View = nullNXObject;
	Point3d dimOrigin2(48.8973375994832, 10.0151588617514, 5.0);
	SketchDimensionalConstraint *sketchDimensionalConstraint2;
	sketchDimensionalConstraint2 = theSession->ActiveSketch()->CreateDimension(Sketch::ConstraintTypeParallelDim, dimObject1_2, dimObject2_1, dimOrigin2, nullExpression, Sketch::DimensionOptionCreateAsAutomatic);

	SketchHelpedDimensionalConstraint *sketchHelpedDimensionalConstraint1(dynamic_cast<SketchHelpedDimensionalConstraint *>(sketchDimensionalConstraint2));
	Annotations::Dimension *dimension2;
	dimension2 = sketchHelpedDimensionalConstraint1->AssociatedDimension();

	Expression *expression2;
	expression2 = sketchHelpedDimensionalConstraint1->AssociatedExpression();

	Sketch::DimensionGeometry dimObject1_3;
	dimObject1_3.Geometry = line5;
	dimObject1_3.AssocType = Sketch::AssocTypeStartPoint;
	dimObject1_3.AssocValue = 0;
	dimObject1_3.HelpPoint.X = 35.0;
	dimObject1_3.HelpPoint.Y = 20.0;
	dimObject1_3.HelpPoint.Z = 5.0;
	dimObject1_3.View = nullNXObject;
	Sketch::DimensionGeometry dimObject2_2;
	dimObject2_2.Geometry = line6;
	dimObject2_2.AssocType = Sketch::AssocTypeEndPoint;
	dimObject2_2.AssocValue = 0;
	dimObject2_2.HelpPoint.X = 50.0474827154395;
	dimObject2_2.HelpPoint.Y = 0.0356757519998754;
	dimObject2_2.HelpPoint.Z = 5.0;
	dimObject2_2.View = nullNXObject;
	Point3d dimOrigin3(49.2044577498857, 19.2025633994042, 5.0);
	SketchDimensionalConstraint *sketchDimensionalConstraint3;
	sketchDimensionalConstraint3 = theSession->ActiveSketch()->CreateDimension(Sketch::ConstraintTypeAngularDim, dimObject1_3, dimObject2_2, dimOrigin3, nullExpression, Sketch::DimensionOptionCreateAsAutomatic);

	Annotations::Dimension *dimension3;
	dimension3 = sketchDimensionalConstraint3->AssociatedDimension();

	Expression *expression3;
	expression3 = sketchDimensionalConstraint3->AssociatedExpression();

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(false);

	theSession->ActiveSketch()->Update();

	theSession->ActiveSketch()->Preferences()->SetContinuousAutoDimensioningSetting(true);

	InferredConstraintsBuilder *inferredConstraintsBuilder2;
	inferredConstraintsBuilder2 = workPart->Sketches()->CreateInferredConstraintsBuilder();

	std::vector<Sketch::AutoDimensioningRule> rules4;
	rules4 = inferredConstraintsBuilder2->GetRules();

	std::vector<Sketch::AutoDimensioningRule> rules5(5);
	rules5[0] = Sketch::AutoDimensioningRuleSymmetric;
	rules5[1] = Sketch::AutoDimensioningRuleAdjacentAngle;
	rules5[2] = Sketch::AutoDimensioningRuleLength;
	rules5[3] = Sketch::AutoDimensioningRuleHorizontalVertical;
	rules5[4] = Sketch::AutoDimensioningRuleReferenceAxes;
	inferredConstraintsBuilder2->SetRules(rules5);

	inferredConstraintsBuilder2->SetHorizontal(true);

	inferredConstraintsBuilder2->SetVertical(true);

	inferredConstraintsBuilder2->SetTangent(true);

	inferredConstraintsBuilder2->SetParallel(true);

	inferredConstraintsBuilder2->SetPerpendicular(true);

	inferredConstraintsBuilder2->SetCollinear(true);

	inferredConstraintsBuilder2->SetConcentric(false);

	inferredConstraintsBuilder2->SetEqualLength(false);

	inferredConstraintsBuilder2->SetEqualRadius(false);

	inferredConstraintsBuilder2->SetDimensionalConstraint(true);

	inferredConstraintsBuilder2->SetPointOnCurve(true);

	inferredConstraintsBuilder2->SetCoincident(true);

	inferredConstraintsBuilder2->SetMidpoint(true);

	inferredConstraintsBuilder2->SetPointOnString(false);

	NXObject *nXObject3;
	nXObject3 = inferredConstraintsBuilder2->Commit();

	theSession->ActiveSketch()->Update();

	std::vector<Sketch::AutoDimensioningRule> rules6(5);
	rules6[0] = Sketch::AutoDimensioningRule(0);
	rules6[1] = Sketch::AutoDimensioningRule(0);
	rules6[2] = Sketch::AutoDimensioningRule(0);
	rules6[3] = Sketch::AutoDimensioningRule(0);
	rules6[4] = Sketch::AutoDimensioningRule(0);
	try
	{
		inferredConstraintsBuilder2->SetRules(rules6);
	}
	catch (const NXException &ex)
	{
		ex.AssertErrorCode(1);
	}

	NXObject *nXObject4;
	nXObject4 = inferredConstraintsBuilder2->Commit();

	inferredConstraintsBuilder2->Destroy();

	Session::UndoMarkId markId7;
	markId7 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Curve");

	theSession->ActiveSketch()->Update();

	// ----------------------------------------------
	//   Menu: Edit->Sketch Curve->Quick Trim...
	// ----------------------------------------------
	theSession->DeleteUndoMark(markId7, "Curve");

	Session::UndoMarkId markId8;
	markId8 = theSession->SetUndoMark(Session::MarkVisibilityVisible, "Start");

	SketchQuickTrimBuilder *sketchQuickTrimBuilder1;
	sketchQuickTrimBuilder1 = workPart->Sketches()->CreateQuickTrimBuilder();

	theSession->SetUndoMarkName(markId8, NXString("Quick Trim \345\257\271\350\257\235\346\241\206", NXString::UTF8));

	Point3d point1(48.0440297103378, -7.48940382768137, 5.0);
	bool added1;
	added1 = sketchQuickTrimBuilder1->TrimmedCurves()->Add(arc1, workPart->ModelingViews()->WorkView(), point1);

	Session::UndoMarkId markId9;
	markId9 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Quick Trim");

	sketchQuickTrimBuilder1->SetExtendBound(false);

	NXObject *nXObject5;
	nXObject5 = sketchQuickTrimBuilder1->Commit();

	sketchQuickTrimBuilder1->SetExtendBound(true);

	sketchQuickTrimBuilder1->Destroy();

	theSession->DeleteUndoMark(markId9, NULL);

	Session::UndoMarkId markId10;
	markId10 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Quick Trim");

	SketchQuickTrimBuilder *sketchQuickTrimBuilder2;
	sketchQuickTrimBuilder2 = workPart->Sketches()->CreateQuickTrimBuilder();

	sketchQuickTrimBuilder2->SetExtendBound(true);

}

void mirrorFeatrue()
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Associative Copy->Mirror Feature...
	Features::Mirror *nullFeatures_Mirror(NULL);

	if ( !workPart->Preferences()->Modeling()->GetHistoryMode() )
	{
		throw NXException::Create("Create or edit of a Feature was recorded in History Mode but playback is in History-Free Mode.");
	}

	Features::MirrorBuilder *mirrorBuilder1;
	mirrorBuilder1 = workPart->Features()->CreateMirrorBuilder(nullFeatures_Mirror);


	Point3d origin1(0.0, 0.0, 0.0);
	Vector3d normal1(0.0, 0.0, 1.0);
	Plane *plane1;
	plane1 = workPart->Planes()->CreatePlane(origin1, normal1, SmartObject::UpdateOptionWithinModeling);

	mirrorBuilder1->PatternService()->MirrorDefinition()->SetNewPlane(plane1);


	mirrorBuilder1->PatternService()->SetPatternType(GeometricUtilities::PatternDefinition::PatternEnumMirror);

	mirrorBuilder1->PatternService()->PatternFill()->FillMargin()->SetRightHandSide("0");

	mirrorBuilder1->PatternService()->PatternOrientation()->SetCircularOrientationOption(GeometricUtilities::PatternOrientation::EnumFollowPattern);

	mirrorBuilder1->PatternService()->PatternOrientation()->SetAlongOrientationOption(GeometricUtilities::PatternOrientation::EnumNormalToPath);

	mirrorBuilder1->PatternService()->PatternOrientation()->SetPolygonOrientationOption(GeometricUtilities::PatternOrientation::EnumFollowPattern);

	mirrorBuilder1->PatternService()->PatternOrientation()->SetSpiralOrientationOption(GeometricUtilities::PatternOrientation::EnumFollowPattern);

	mirrorBuilder1->PatternService()->PatternOrientation()->SetMirrorOrientationOption(GeometricUtilities::PatternOrientation::EnumFollowPattern);

	mirrorBuilder1->PatternService()->RectangularDefinition()->XSpacing()->NCopies()->SetRightHandSide("2");

	mirrorBuilder1->PatternService()->RectangularDefinition()->XSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->RectangularDefinition()->XSpacing()->SpanDistance()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->RectangularDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->RectangularDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->RectangularDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->RectangularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	mirrorBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->NCopies()->SetRightHandSide("12");

	mirrorBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->PitchAngle()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->CircularDefinition()->AngularSpacing()->SpanAngle()->SetRightHandSide("360");

	mirrorBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->CircularDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->CircularDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->SetXPathOption(GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	mirrorBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->NCopies()->SetRightHandSide("2");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->XOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->SetYDirectionOption(GeometricUtilities::AlongPathPattern::YDirectionOptionsSection);

	mirrorBuilder1->PatternService()->AlongPathDefinition()->SetYPathOption(GeometricUtilities::AlongPathPattern::PathOptionsOffset);

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->NCopies()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YOnPathSpacing()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->NCopies()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->AlongPathDefinition()->YSpacing()->SpanDistance()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->MirrorDefinition()->SetPlaneOption(GeometricUtilities::MirrorPattern::PlaneOptionsNew);

	mirrorBuilder1->PatternService()->SpiralDefinition()->NumberOfTurns()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->SpiralDefinition()->TotalAngle()->SetRightHandSide("360");

	mirrorBuilder1->PatternService()->SpiralDefinition()->RadialPitch()->SetRightHandSide("50");

	mirrorBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->NCopies()->SetRightHandSide("2");

	mirrorBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathPitchDistance()->Expression()->SetRightHandSide("50");

	mirrorBuilder1->PatternService()->SpiralDefinition()->PitchAlongSpiral()->OnPathSpanDistance()->Expression()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->SpiralDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	mirrorBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->NCopies()->SetRightHandSide("4");

	mirrorBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->PitchDistance()->SetRightHandSide("25");

	mirrorBuilder1->PatternService()->PolygonDefinition()->PolygonSpacing()->SpanAngle()->SetRightHandSide("360");

	mirrorBuilder1->PatternService()->PolygonDefinition()->NumberOfSides()->SetRightHandSide("6");

	mirrorBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->NCopies()->SetRightHandSide("1");

	mirrorBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->PitchDistance()->SetRightHandSide("10");

	mirrorBuilder1->PatternService()->PolygonDefinition()->RadialSpacing()->SpanDistance()->SetRightHandSide("100");

	mirrorBuilder1->PatternService()->PolygonDefinition()->HorizontalRef()->RotationAngle()->SetRightHandSide("0");

	mirrorBuilder1->SetCsysMirrorOption(Features::MirrorBuilder::CsysMirrorOptionsMirrorYAndZ);


	plane1->SetMethod(PlaneTypes::MethodTypeFixedY);

	std::vector<NXObject *> geom1(0);
	plane1->SetGeometry(geom1);

	Point3d origin2(0.0, 0.0, 0.0);
	plane1->SetOrigin(origin2);

	Matrix3x3 matrix1;
	matrix1.Xx = 0.0;
	matrix1.Xy = 0.0;
	matrix1.Xz = 1.0;
	matrix1.Yx = 1.0;
	matrix1.Yy = 0.0;
	matrix1.Yz = 0.0;
	matrix1.Zx = 0.0;
	matrix1.Zy = 1.0;
	matrix1.Zz = 0.0;
	plane1->SetMatrix(matrix1);

	plane1->SetAlternate(PlaneTypes::AlternateTypeOne);

	plane1->Evaluate();

	plane1->SetMethod(PlaneTypes::MethodTypeFixedY);

	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject("EXTRUDE(18)")));
	bool added1;
	added1 = mirrorBuilder1->FeatureList()->Add(extrude1);

	// ӎ߼֣ (42.877615, 10.941132, 2.500000) Փѡַ֨ؔ֯͘Ɛ׏c
// 	Point3d coordinates1(42.8776148043353, 10.9411316726878, 2.5);
// 	Point *point1;
// 	point1 = workPart->Points()->CreatePoint(coordinates1);
// 
// 	mirrorBuilder1->SetReferencePoint(point1);
// 
// 	mirrorBuilder1->SetParentFeatureInternal(false);

	NXObject *nXObject1;
	nXObject1 = mirrorBuilder1->Commit();

	mirrorBuilder1->Destroy();

}


void qiuhe(char *targetExtrueName1,char *targetExtrueName2,char *setName)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Combine->Unite...
	// ----------------------------------------------

	Features::BooleanFeature *nullFeatures_BooleanFeature(NULL);

	if ( !workPart->Preferences()->Modeling()->GetHistoryMode() )
	{
		throw NXException::Create("Create or edit of a Feature was recorded in History Mode but playback is in History-Free Mode.");
	}

	Features::BooleanBuilder *booleanBuilder1;
	booleanBuilder1 = workPart->Features()->CreateBooleanBuilderUsingCollector(nullFeatures_BooleanFeature);

	ScCollector *scCollector1;
	scCollector1 = booleanBuilder1->ToolBodyCollector();

	GeometricUtilities::BooleanRegionSelect *booleanRegionSelect1;
	booleanRegionSelect1 = booleanBuilder1->BooleanRegionSelect();

	booleanBuilder1->SetTolerance(0.001);

	booleanBuilder1->SetOperation(Features::Feature::BooleanTypeUnite);

	char* sketch1 = getJournalId(targetExtrueName1);
	Body *body1(dynamic_cast<Body *>(workPart->Bodies()->FindObject(sketch1)));
	bool added1;
	added1 = booleanBuilder1->Targets()->Add(body1);

	std::vector<TaggedObject *> targets1(1);
	targets1[0] = body1;
	booleanRegionSelect1->AssignTargets(targets1);

	ScCollector *scCollector2;
	scCollector2 = workPart->ScCollectors()->CreateCollector();

	std::vector<Body *> bodies1(1);
	char* sketch2 = getJournalId(targetExtrueName2);
	Body *body2(dynamic_cast<Body *>(workPart->Bodies()->FindObject(sketch2)));
	bodies1[0] = body2;
	BodyDumbRule *bodyDumbRule1;
	bodyDumbRule1 = workPart->ScRuleFactory()->CreateRuleBodyDumb(bodies1);

	std::vector<SelectionIntentRule *> rules1(1);
	rules1[0] = bodyDumbRule1;
	scCollector2->ReplaceRules(rules1, false);

	booleanBuilder1->SetToolBodyCollector(scCollector2);

	std::vector<TaggedObject *> targets2(1);
	targets2[0] = body1;
	booleanRegionSelect1->AssignTargets(targets2);

	NXObject *nXObject1;
	nXObject1 = booleanBuilder1->Commit();
	nXObject1->SetName(setName);
	booleanBuilder1->Destroy();
}


void daojiao(char *targetSketchName,char *str2,char *r,char *setName)
{
	Session *theSession = Session::GetSession();
	Part *workPart(theSession->Parts()->Work());
	Part *displayPart(theSession->Parts()->Display());
	// ----------------------------------------------
	//   Menu: Insert->Detail Feature->Edge Blend...
	// ----------------------------------------------

	Features::Feature *nullFeatures_Feature(NULL);
	Features::EdgeBlendBuilder *edgeBlendBuilder1;
	edgeBlendBuilder1 = workPart->Features()->CreateEdgeBlendBuilder(nullFeatures_Feature);

	GeometricUtilities::BlendLimitsData *blendLimitsData1;
	blendLimitsData1 = edgeBlendBuilder1->LimitsListData();

	Point3d origin1(0.0, 0.0, 0.0);
	Vector3d normal1(0.0, 0.0, 1.0);
	Plane *plane1;
	plane1 = workPart->Planes()->CreatePlane(origin1, normal1, SmartObject::UpdateOptionWithinModeling);

	GeometricUtilities::FacePlaneSelectionBuilder *facePlaneSelectionBuilder1;
	facePlaneSelectionBuilder1 = workPart->FacePlaneSelectionBuilderData()->Create();

	ScCollector *scCollector1;
	scCollector1 = workPart->ScCollectors()->CreateCollector();

	std::vector<Edge *> seedEdges1(1);
	char *sketch1 = getJournalId(targetSketchName);
	Features::Extrude *extrude1(dynamic_cast<Features::Extrude *>(workPart->Features()->FindObject(sketch1)));
	Edge *edge1(dynamic_cast<Edge *>(extrude1->FindObject(str2)));
	seedEdges1[0] = edge1;
	EdgeMultipleSeedTangentRule *edgeMultipleSeedTangentRule1;
	edgeMultipleSeedTangentRule1 = workPart->ScRuleFactory()->CreateRuleEdgeMultipleSeedTangent(seedEdges1, 0.05, true);

	std::vector<SelectionIntentRule *> rules1(1);
	rules1[0] = edgeMultipleSeedTangentRule1;
	scCollector1->ReplaceRules(rules1, false);

	edgeBlendBuilder1->SetTolerance(0.001);

	edgeBlendBuilder1->SetAllInstancesOption(false);

	edgeBlendBuilder1->SetRemoveSelfIntersection(true);

	edgeBlendBuilder1->SetPatchComplexGeometryAreas(true);

	edgeBlendBuilder1->SetLimitFailingAreas(true);

	edgeBlendBuilder1->SetConvexConcaveY(false);

	edgeBlendBuilder1->SetRollOverSmoothEdge(true);

	edgeBlendBuilder1->SetRollOntoEdge(true);

	edgeBlendBuilder1->SetMoveSharpEdge(true);

	edgeBlendBuilder1->SetTrimmingOption(false);

	edgeBlendBuilder1->SetOverlapOption(Features::EdgeBlendBuilder::OverlapAnyConvexityRollOver);

	edgeBlendBuilder1->SetBlendOrder(Features::EdgeBlendBuilder::OrderOfBlendingConvexFirst);

	edgeBlendBuilder1->SetSetbackOption(Features::EdgeBlendBuilder::SetbackSeparateFromCorner);

	int csIndex1;
	csIndex1 = edgeBlendBuilder1->AddChainset(scCollector1, r);

	Features::Feature *feature1;
	feature1 = edgeBlendBuilder1->CommitFeature();
	feature1->SetName(setName);

	workPart->FacePlaneSelectionBuilderData()->Destroy(facePlaneSelectionBuilder1);

	
	edgeBlendBuilder1->Destroy();

}