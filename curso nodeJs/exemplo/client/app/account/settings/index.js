'use strict';

import angular from 'angular';
import SettingsController from './settings.controller';

export default angular.module('exemploApp.settings', [])
  .controller('SettingsController', SettingsController)
  .name;
