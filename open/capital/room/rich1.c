// by Onion
#include </open/open.h>
inherit ROOM;
string do_boxes();
void create ()
{
  set ("short", "��ͨ����Ժ");
  set ("long", @LONG
�߽����, �Ǹ�ͨ��סլ����Ժ, һƬƽ̹�ĵط�, �����仹�ѷ�
�ż���������(boxes), ��֪����ʲô����, ������Ǯͨ��ĵط�, ʹ
���е����Ѳ�(search)�ĺ����ġ�

LONG);

  set("light_up", 1);
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"rich",
]));
	set("item_desc",([
	"boxes"	: "����������, ��ͷ��֪������ʲô������\n",
	]));
	set("search_desc",([
	"boxes" : (: do_boxes :),
	]));
	set_temp("�й�",1);

  setup();
}

string do_boxes()
{
	if( query_temp("�й�") ){
		tell_room( this_object(),"[1;33m��֪�����Ķ������һֻ���͵���Ȯ��[0m\n");
		new(CAPITAL_NPC"dog0")->move(this_object());
		delete_temp("�й�");
	}
	return "�⼸�����Ӷ�������, ��û�취�򿪡�\n";
}		

	