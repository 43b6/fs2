// Room: /open/poison/room/road7
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������Ұʮ��������������紵������һ�������־�
��ʧ����Ӱ���٣���ǰ��һ�ȵأ�����Ⱥ�廷������������
�Բԣ���������ȥ�������ߣ��������������ɼ�һ��ΰ��
Ժ����������һ��Ƭ�ߴ���Ӳݴԣ���������һ���ͺͺ��
���ڡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road19",
  "northwest" : __DIR__"road8",
]));
  set("outdoors", "/open/poison");

  setup();
}
void init()
{
 add_action("do_go","go");
 add_action("do_east","east");
}

int do_go(string str)
{
 object me;
 me = this_player();
if(str == "east")
{
   message_vision("$N�����߸ߵĲݴԣ�����ɳɳ��������\n",me);
    me->move(__DIR__"path9");
    return 1;
}
return 0;
}
int do_east()
{
object me;
me = this_player();
  message_vision("$N�����߸ߵĲݴԣ�����ɳɳ��������\n",me);
me->move(__DIR__"path9");
return 1;
}
