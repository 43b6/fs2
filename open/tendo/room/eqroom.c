// Room: /open/start/room/eqroom
inherit ROOM;

void create()
{
	set("short","EQ������");
	set("exits",([ /*sizeof()==1 */
	"south" : __DIR__"start",
 ]));
	set("no_clean_up", 1);
  set ("long", @LONG
�����������Ϊ���츣�½����������ٵ�EQ�ң�����������������EQ
�㲻���е�һ��ů��ֱ͸��ͷ.
LONG);

  set("light_up", 1);
	set("no_fight",1);
  setup();
call_other("/obj/board/ten_b.c","???");
}
