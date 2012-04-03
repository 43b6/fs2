// Room: /open/badman/room/forest15.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�������һ��Ƭ�����֣����ǿ�����Щ�����͵���Ҷ���Լ���
���󴵷������΢�磬�������Ǹ��ľ��ĺ����ڣ�������Ƭ������
������֣�ʹ�㲻���������������͵��Ƿ��������£�������ֵ�
�����Ǹ������峺�ĺ�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"forest16",
  "east" : __DIR__"forest14",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "bamboo" : "һ����ϸ�������ӡ�"+"��һ��, ����������и�����..\n"+
  	     "���벦��(poke)���ֿ�����?\n",
]));
  set("outdoors", "/open/badman");

  setup();
}
void init()
{
	add_action("do_poke", "poke");
}
int do_poke()
{
	if ( this_object()->query_temp("coffin") != 1 ){
	message_vision("��! һ�ڹײ�ͻȻ������$N��ǰ....\n"+
		       "�治�Ǹ���Ԥ�ס�\n",this_player());
	new(BAD_OBJ"coffin")->move(this_object());
	this_object()->set_temp("coffin",1);
	return 1;
	}
	tell_object(this_player(),"������ǰ��ڹײ���, ��ʲôҲû���֡�\n");
	return 1;
}	
