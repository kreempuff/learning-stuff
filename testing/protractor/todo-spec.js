// spec.js
describe('Protractor Demo App', function() {

  beforeEach(function() {
    browser.get('http://www.lentusignavus.com');
  });

  it('should have a history', function() {
     // This is wrong!
     expect(browser.getTitle()).to.be("Kareem March")

  });
});
