/*****************************************************************************
 ** Name:        wxwidgets.js
 ** Purpose:     The wxWidgets documentation javascript
 ** Author:      Doxygen team
 ** RCS-ID:      $Id: wxwidgets.js 70463 2012-01-25 06:39:53Z BP $
 ** Licence:     wxWindows licence
 *****************************************************************************/

// from w3schools
function getCookie(c_name)
{
  if (document.cookie.length>0)
  {
    c_start=document.cookie.indexOf(c_name + "=");
    if (c_start!=-1)
    {
      c_start=c_start + c_name.length+1;
      c_end=document.cookie.indexOf(";",c_start);
      if (c_end==-1) c_end=document.cookie.length;
      return unescape(document.cookie.substring(c_start,c_end));
    }
  }
  return "";
}
// from w3schools
function setCookie(c_name,value,expiredays)
{
  var exdate=new Date();
  exdate.setDate(exdate.getDate()+expiredays);
  document.cookie=c_name+ '=' +escape(value)+
  ((expiredays==null) ? '' : ';expires='+exdate.toGMTString());
}

$(function() {

  var display = getCookie('sectionDiv.style.display');
  if ( display == '' || display == 'block' ) {
    $('div.dynheader').each(function() { toggleVisibility(this); });
    setCookie('sectionDiv.style.display', 'block');
  }

  $('div.dynheader').click(function() {
    var display = $('#' + $(this).attr('id') + '-content').css('display');
    setCookie('sectionDiv.style.display', display);
  });

  list_of_members_link = $('a[href$="-members.html"]:first');
  if(list_of_members_link.length) {
    summary_div = $('div.header div.summary:first');
    if(summary_div.length) {
      summary_div.append(' | ');
      summary_div.append(list_of_members_link.clone().text('List of All Members'));
    }
  }

});
