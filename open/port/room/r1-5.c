// made by funkcat, copy and re-edit by ccat
#include <ansi.h>
inherit BANK;
void create ()
{
	set("short",HIY"��ʷ��Ǯׯ��"NOR);
  set ("long", @LONG

���������Ǳ�������Ǯׯ����ߵĴ�����ȫ������һ����
�ģ�����԰��ĵĽ�Ǯ����������Ǯׯ���ϰ��Ǵ����ʷ
����������Կ�������Ĺ���(board)����������ô����

LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east" : "/open/port/room/r1-2",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
	�������ࣺ
		deposit �� ���    
		withdraw�� ���               
		balance �� ��ѯ���
		convert �� ��Ǯ��

	�������ࣺ
		diamond �� ��ʯ
		cash    �� ��Ʊ
		gold    �� �ƽ�
		silver  �� ����
		coin    �� ͭǮ

	ע��! ��������ʽ��Ľ���ʱ����Ϊ�ϰ��������̫�ã�
	�п��ܻ������ʦ�ɲ���ʷ��Ǯׯ��Ǯ�!
	���Խ����㻹�Ǳ�ð�գ���Ը�ֶ��һ�㣬���������㡣

",
]));
  set("light_up", 1);
  set("donate",1);
  set("objects", ([ /* sizeof() == 1 */
]));

  setup();
}
