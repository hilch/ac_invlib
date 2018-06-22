/*********************************************************************************************
*  Copyright: 2008 - 2012 by B&R Industrial Automation                                       *
*--------------------------------------------------------------------------------------------*
*  Identification:                                                                           *
*    System     Help System                                                                  *
*    Purpose	  folding and unfolding of html content                                      *
*                                                                                            *
*    Filename   content_floding.js                                                           *
*                                                                                            *
*--------------------------------------------------------------------------------------------*
*  History :                                                                                 *
*  Version       Datum         Autor                                                         *
*  01.00         19.08.08      W. Paulin         created                                     *
*  02.00         30.10.12      J. Gierlinger     add checkbox                                *
*********************************************************************************************/

/* expand and collapse topics */
function collapse_expand(conId, imgCollapseId, imgExpandId)
{
  if( document.getElementById(conId).style.display != 'inline' )
	{
		document.getElementById(conId).style.display = 'inline';
		document.getElementById(imgCollapseId).style.display= 'inline';
		document.getElementById(imgExpandId).style.display= 'none';
	}
  else
	{
		document.getElementById(conId).style.display = 'none';
		document.getElementById(imgCollapseId).style.display= 'none';
		document.getElementById(imgExpandId).style.display= 'inline';
	}
}

/* expand topics */
function expand(conId, imgId)
{
  if( document.getElementById(conId).style.display != 'inline' )
	{
		document.getElementById(conId).style.display = 'inline';
		document.getElementById(imgId).src = 'images/_collapse.png';
	}
}

/* checkbox for optional parameters */
function checkbox(conId1,conId2,intId1,intId2, imgId1, imgId2)
{
  if( document.getElementById(conId1).style.display != 'inline' )
	{
		document.getElementById(conId1).style.display = 'inline';
		document.getElementById(conId2).style.display = 'none';
		document.getElementById(intId1).style.display = 'inline';
		document.getElementById(intId2).style.display = 'none';
		document.getElementById(imgId1).style.display= 'none';
		document.getElementById(imgId2).style.display= 'inline';
	}
  else
	{
		document.getElementById(conId1).style.display = 'none';
		document.getElementById(conId2).style.display = 'inline';
		document.getElementById(intId1).style.display = 'none';
		document.getElementById(intId2).style.display = 'inline';
		document.getElementById(imgId1).style.display= 'inline';
		document.getElementById(imgId2).style.display= 'none';
	}

}