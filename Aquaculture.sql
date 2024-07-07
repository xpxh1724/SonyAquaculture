/*
 Navicat Premium Data Transfer

 Source Server         : yun
 Source Server Type    : MySQL
 Source Server Version : 80026
 Source Host           : 49.232.149.245:3306
 Source Schema         : Aquaculture

 Target Server Type    : MySQL
 Target Server Version : 80026
 File Encoding         : 65001

 Date: 27/03/2024 17:28:17
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for Identity
-- ----------------------------
DROP TABLE IF EXISTS `Identity`;
CREATE TABLE `Identity`  (
  `identity` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_as_ci NULL DEFAULT NULL,
  `fd` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_as_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_as_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of Identity
-- ----------------------------
INSERT INTO `Identity` VALUES ('YJ', '');
INSERT INTO `Identity` VALUES ('PC', '');

-- ----------------------------
-- Table structure for MonitorData
-- ----------------------------
DROP TABLE IF EXISTS `MonitorData`;
CREATE TABLE `MonitorData`  (
  `Temp` float NULL DEFAULT NULL,
  `Humidity` float NULL DEFAULT NULL,
  `Pressure` float NULL DEFAULT NULL,
  `VOC` float NULL DEFAULT NULL,
  `Light` float NULL DEFAULT NULL,
  `PH` float NULL DEFAULT NULL,
  `TDS` float NULL DEFAULT NULL,
  `EC` float NULL DEFAULT NULL,
  `Turbidity` float NULL DEFAULT NULL,
  `Temp1` float NULL DEFAULT NULL,
  `Temp2` float NULL DEFAULT NULL,
  `WaterLevel1` float NULL DEFAULT NULL,
  `WaterLevel2` float NULL DEFAULT NULL,
  `Time` timestamp(6) NOT NULL DEFAULT CURRENT_TIMESTAMP(6) ON UPDATE CURRENT_TIMESTAMP(6),
  PRIMARY KEY (`Time`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_as_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of MonitorData
-- ----------------------------
INSERT INTO `MonitorData` VALUES (25, 69, 1019, 20, 1068, 6, 192, 26, 0, 30, 21, 31, 30, '2024-03-01 18:48:13.642691');
INSERT INTO `MonitorData` VALUES (28, 80, 1009, 20, 606, 7, 465, 17, 14, 19, 20, 33, 35, '2024-03-01 18:48:14.775930');
INSERT INTO `MonitorData` VALUES (18, 77, 1004, 20, 884, 8, 457, 20, 16, 25, 29, 22, 25, '2024-03-01 18:48:15.893175');
INSERT INTO `MonitorData` VALUES (30, 67, 1000, 24, 997, 7, 264, 19, 12, 26, 29, 29, 20, '2024-03-01 18:48:17.024395');
INSERT INTO `MonitorData` VALUES (27, 66, 1003, 3, 979, 6, 428, 22, 11, 25, 21, 31, 19, '2024-03-01 18:48:18.144739');
INSERT INTO `MonitorData` VALUES (20, 66, 1014, 10, 1065, 8, 387, 28, 6, 29, 20, 35, 14, '2024-03-01 18:48:19.268475');
INSERT INTO `MonitorData` VALUES (25, 63, 1003, 17, 725, 7, 489, 30, 12, 26, 19, 19, 37, '2024-03-01 18:48:20.397941');
INSERT INTO `MonitorData` VALUES (27, 68, 1022, 19, 523, 6, 209, 28, 8, 28, 28, 32, 23, '2024-03-01 18:48:21.519755');
INSERT INTO `MonitorData` VALUES (30, 78, 1022, 16, 980, 7, 384, 27, 11, 21, 25, 31, 26, '2024-03-01 18:48:22.642000');
INSERT INTO `MonitorData` VALUES (24, 68, 1024, 9, 931, 6, 272, 23, 16, 23, 30, 26, 20, '2024-03-01 18:48:23.768572');

-- ----------------------------
-- Table structure for Record
-- ----------------------------
DROP TABLE IF EXISTS `Record`;
CREATE TABLE `Record`  (
  `Serial` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_as_ci NULL DEFAULT NULL,
  `Time` datetime NULL DEFAULT NULL,
  `Type` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_as_ci NULL DEFAULT NULL,
  `Msg` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_as_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_as_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of Record
-- ----------------------------
INSERT INTO `Record` VALUES ('1', '2024-03-01 18:48:06', '提示', '水上温度异常提示！');
INSERT INTO `Record` VALUES ('2', '2024-03-01 18:48:06', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('3', '2024-03-01 18:48:06', '提示', '水下PH异常提示！');
INSERT INTO `Record` VALUES ('4', '2024-03-01 18:48:06', '提示', '水下TDS异常提示！');
INSERT INTO `Record` VALUES ('5', '2024-03-01 18:48:06', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('6', '2024-03-01 18:48:06', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('7', '2024-03-01 18:48:06', '警告', '水下水位1异常警告！');
INSERT INTO `Record` VALUES ('8', '2024-03-01 18:48:07', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('9', '2024-03-01 18:48:07', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('10', '2024-03-01 18:48:08', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('11', '2024-03-01 18:48:09', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('12', '2024-03-01 18:48:09', '提示', '水上VOC异常提示！');
INSERT INTO `Record` VALUES ('13', '2024-03-01 18:48:09', '提示', '水上光照强度异常提示！');
INSERT INTO `Record` VALUES ('14', '2024-03-01 18:48:09', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('15', '2024-03-01 18:48:10', '提示', '水上光照强度异常提示！');
INSERT INTO `Record` VALUES ('16', '2024-03-01 18:48:10', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('17', '2024-03-01 18:48:10', '警告', '水下水位1异常警告！');
INSERT INTO `Record` VALUES ('18', '2024-03-01 18:48:10', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('19', '2024-03-01 18:48:11', '提示', '水上湿度异常提示！');
INSERT INTO `Record` VALUES ('20', '2024-03-01 18:48:11', '提示', '水上光照强度异常提示！');
INSERT INTO `Record` VALUES ('21', '2024-03-01 18:48:12', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('22', '2024-03-01 18:48:12', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('23', '2024-03-01 18:48:13', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('24', '2024-03-01 18:48:13', '提示', '水下温度2异常提示！');
INSERT INTO `Record` VALUES ('25', '2024-03-01 18:48:13', '提示', '水下水位1异常提示！');
INSERT INTO `Record` VALUES ('26', '2024-03-01 18:48:14', '提示', '水上光照强度异常提示！');
INSERT INTO `Record` VALUES ('27', '2024-03-01 18:48:14', '提示', '水下PH异常提示！');
INSERT INTO `Record` VALUES ('28', '2024-03-01 18:48:14', '提示', '水下TDS异常提示！');
INSERT INTO `Record` VALUES ('29', '2024-03-01 18:48:14', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('30', '2024-03-01 18:48:15', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('31', '2024-03-01 18:48:15', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('32', '2024-03-01 18:48:15', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('33', '2024-03-01 18:48:15', '提示', '水下温度1异常提示！');
INSERT INTO `Record` VALUES ('21', '2024-03-01 18:48:16', '提示', '水上温度异常提示！');
INSERT INTO `Record` VALUES ('35', '2024-03-01 18:48:16', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('36', '2024-03-01 18:48:16', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('37', '2024-03-01 18:48:16', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('38', '2024-03-01 18:48:16', '警告', '水下水位1异常警告！');
INSERT INTO `Record` VALUES ('39', '2024-03-01 18:48:17', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('40', '2024-03-01 18:48:17', '提示', '水上VOC异常提示！');
INSERT INTO `Record` VALUES ('41', '2024-03-01 18:48:17', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('42', '2024-03-01 18:48:17', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('43', '2024-03-01 18:48:17', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('44', '2024-03-01 18:48:18', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('45', '2024-03-01 18:48:18', '提示', '水下PH异常提示！');
INSERT INTO `Record` VALUES ('46', '2024-03-01 18:48:18', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('47', '2024-03-01 18:48:18', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('48', '2024-03-01 18:48:18', '提示', '水下水位2异常提示！');
INSERT INTO `Record` VALUES ('49', '2024-03-01 18:48:19', '提示', '水上光照强度异常提示！');
INSERT INTO `Record` VALUES ('50', '2024-03-01 18:48:19', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('51', '2024-03-01 18:48:19', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('32', '2024-03-01 18:48:20', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('53', '2024-03-01 18:48:20', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('54', '2024-03-01 18:48:21', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('55', '2024-03-01 18:48:21', '提示', '水下温度2异常提示！');
INSERT INTO `Record` VALUES ('56', '2024-03-01 18:48:21', '提示', '水下水位1异常提示！');
INSERT INTO `Record` VALUES ('57', '2024-03-01 18:48:21', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('58', '2024-03-01 18:48:21', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('59', '2024-03-01 18:48:22', '提示', '水下PH异常提示！');
INSERT INTO `Record` VALUES ('60', '2024-03-01 18:48:22', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('61', '2024-03-01 18:48:22', '警告', '水下水位2异常警告！');
INSERT INTO `Record` VALUES ('62', '2024-03-01 18:48:23', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('63', '2024-03-01 18:48:23', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('64', '2024-03-01 18:48:23', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('65', '2024-03-01 18:48:24', '提示', '水上气压异常提示！');
INSERT INTO `Record` VALUES ('66', '2024-03-01 18:48:24', '提示', '水下PH异常提示！');
INSERT INTO `Record` VALUES ('67', '2024-03-01 18:48:24', '警告', '水下EC异常警告！');
INSERT INTO `Record` VALUES ('68', '2024-03-01 18:48:24', '提示', '水下浊度异常提示！');
INSERT INTO `Record` VALUES ('69', '2024-03-01 18:48:24', '警告', '水下水位2异常警告！');

SET FOREIGN_KEY_CHECKS = 1;
