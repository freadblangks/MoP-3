ALTER TABLE `quest_template` ADD COLUMN `Flags2` INT(10) UNSIGNED DEFAULT 0 NOT NULL AFTER `Flags`, ADD COLUMN `RewardPackageItemId` MEDIUMINT(8) UNSIGNED DEFAULT 0 NOT NULL AFTER `QuestTurnInPortrait`;