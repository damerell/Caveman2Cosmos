#pragma once
#ifndef CV_IMPROVEMENTINFO_H
#define CV_IMPROVEMENTINFO_H
#include <vector>

#include "CvGameCoreDLL.h"
#include "CvInfos.h"
class CvImprovementInfo :
	public CvInfoBase
{
	//---------------------------PUBLIC INTERFACE---------------------------------
public:

	CvImprovementInfo();
	virtual ~CvImprovementInfo();

	bool isBombardable() const;
	bool isUpgradeRequiresFortify() const;
	bool isUniversalTradeBonusProvider() const;
	bool isZOCSource() const;
	bool isActsAsCity() const;
	bool isHillsMakesValid() const;
	bool isFreshWaterMakesValid() const;
	bool isRiverSideMakesValid() const;
	bool isNoFreshWater() const;
	bool isRequiresFlatlands() const;
	DllExport bool isRequiresRiverSide() const;
	bool isRequiresIrrigation() const;
	bool isCarriesIrrigation() const;
	bool isRequiresFeature() const;
	bool isPeakImprovement() const;
	bool isWaterImprovement() const;
	DllExport bool isGoody() const;
	bool isPermanent() const;
	bool isOutsideBorders() const;
	bool isCanMoveSeaUnits() const;
	bool isChangeRemove() const;
	bool isNotOnAnyBonus() const;
	bool isNational() const;
	bool isGlobal() const;

	int getAdvancedStartCost() const;
	int getTilesPerGoody() const;
	int getGoodyUniqueRange() const;
	int getFeatureGrowthProbability() const;
	int getUpgradeTime() const;
	int getAirBombDefense() const;
	int getDefenseModifier() const;
	int getHappiness() const;
	int getPillageGold() const;
	int getCulture() const;
	int getCultureRange() const;
	int getVisibilityChange() const;
	int getSeeFrom() const;
	int getUniqueRange() const;
	int getWorldSoundscapeScriptId() const;

	ImprovementTypes getImprovementPillage() const	{ return m_iImprovementPillage; }
	ImprovementTypes getImprovementUpgrade() const	{ return m_iImprovementUpgrade; }
	BonusTypes getBonusChange() const				{ return m_iBonusChange; }

	const TCHAR* getArtDefineTag() const;

	int getPrereqNatureYield(int i) const;
	int* getPrereqNatureYieldArray() const;
	int getYieldChange(int i) const;
	int* getYieldChangeArray() const;
	int getRiverSideYieldChange(int i) const;
	int* getRiverSideYieldChangeArray() const;
	int getIrrigatedYieldChange(int i) const;
	int* getIrrigatedYieldChangeArray() const;

	bool getTerrainMakesValid(int i) const;
	bool getFeatureMakesValid(int i) const;

	int getTechYieldChanges(int i, int j) const;
	int* getTechYieldChangesArray(int i) const;
	int getRouteYieldChanges(int i, int j) const;
	int* getRouteYieldChangesArray(int i) const;

	int getImprovementBonusYield(int i, int j) const;
	bool isImprovementBonusMakesValid(int i) const;
	bool isImprovementObsoleteBonusMakesValid(int i) const;
	bool isImprovementBonusTrade(int i) const;
	int getImprovementBonusDiscoverRand(int i) const;

	int getNumBuildTypes() const { return m_improvementBuildTypes.size(); };
	const std::vector<BuildTypes>& getBuildTypes() const { return m_improvementBuildTypes; };
	BuildTypes getImprovementBuildType(int iIndex) const;

	int getMapType(int i) const;
	int getNumMapTypes() const;
	bool isMapType(int i) const;
	const std::vector<int>& getMapTypes() const { return m_aiMapTypes; }

	const TCHAR* getButton() const;
	DllExport const CvArtInfoImprovement* getArtInfo() const;

	int getHealthPercent() const;
	bool isPeakMakesValid() const;
	int getImprovementBonusDepletionRand(int i) const;
	TechTypes getPrereqTech() const	{ return m_iPrereqTech; }
	//int getTraitYieldChanges(int i, int j) const;
	//int* getTraitYieldChangesArray(int i) const;

	int getAlternativeImprovementUpgradeType(int i) const;
	int getNumAlternativeImprovementUpgradeTypes() const;
	bool isAlternativeImprovementUpgradeType(int i) const;

	int getFeatureChangeType(int i) const;
	int getNumFeatureChangeTypes() const;
	bool isFeatureChangeType(int i) const;

	//Post Load Functions
	//void setHighestCost();
	//int getHighestCost() const;

	const CvPropertyManipulators* getPropertyManipulators() const { return &m_PropertyManipulators; }

	bool read(CvXMLLoadUtility* pXML);
	void copyNonDefaults(const CvImprovementInfo* pClassInfo);
	void getCheckSum(uint32_t& iSum) const;

private:
	bool m_bPeakMakesValid;
	bool m_bBombardable;
	bool m_bUpgradeRequiresFortify;
	bool m_bIsUniversalTradeBonusProvider;
	bool m_bIsZOCSource;
	bool m_bActsAsCity;
	bool m_bHillsMakesValid;
	bool m_bFreshWaterMakesValid;
	bool m_bRiverSideMakesValid;
	bool m_bNoFreshWater;
	bool m_bRequiresFlatlands;
	bool m_bRequiresRiverSide;
	bool m_bRequiresIrrigation;
	bool m_bCarriesIrrigation;
	bool m_bRequiresFeature;
	bool m_bPeakImprovement;
	bool m_bWaterImprovement;
	bool m_bGoody;
	bool m_bPermanent;
	bool m_bOutsideBorders;
	bool m_bCanMoveSeaUnits;
	bool m_bChangeRemove;
	bool m_bNotOnAnyBonus;
	bool m_bNational;
	bool m_bGlobal;

	int m_iHealthPercent;
	int m_iDepletionRand;
	int m_iAdvancedStartCost;
	int m_iTilesPerGoody;
	int m_iGoodyUniqueRange;
	int m_iFeatureGrowthProbability;
	int m_iUpgradeTime;
	int m_iAirBombDefense;
	int m_iDefenseModifier;
	int m_iHappiness;
	int m_iPillageGold;
	int m_iCulture;
	int m_iCultureRange;
	int m_iVisibilityChange;
	int m_iSeeFrom;
	int m_iUniqueRange;
	int m_iWorldSoundscapeScriptId;

	BonusTypes m_iBonusChange;
	ImprovementTypes m_iImprovementPillage;
	ImprovementTypes m_iImprovementUpgrade;
	TechTypes m_iPrereqTech;

	CvString m_szArtDefineTag;

	int* m_piPrereqNatureYield;
	int* m_piYieldChange;
	int* m_piRiverSideYieldChange;
	int* m_piIrrigatedChange;

	bool* m_pbTerrainMakesValid;
	bool* m_pbFeatureMakesValid;

	int** m_ppiTechYieldChanges;
	int** m_ppiRouteYieldChanges;
	//int** m_ppiTraitYieldChanges;

	CvImprovementBonusInfo* m_paImprovementBonus;

	std::vector<int> m_aiMapTypes;
	std::vector<int> m_aiAlternativeImprovementUpgradeTypes;
	std::vector<int> m_aiFeatureChangeTypes;
	std::vector<BuildTypes> m_improvementBuildTypes;

	CvPropertyManipulators m_PropertyManipulators;

	//Post Load Functions
	//int m_iHighestCost;
};
#endif