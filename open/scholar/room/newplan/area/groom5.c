// Room: /u/s/sueplan/newplan/area/get3.c
inherit ROOM;

void create ()
{
  set ("short", "С�ű�");
  set ("long", @LONG

��շ��Ű���, �����������Ƿǳ��ĺ���, ·�Ͽ����������
�����質, ����������ޱȵ���졣��ǰ��һ��С��, ��������
����ˮ��, ˮ�л����Կ���С��������!!

LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"groom4.c",
]));

  setup();
}
void init()
{
add_action("do_take","take");
add_action("do_search","search");
}
int do_take(string str)
{
object me=this_player();
object ob;
if(str=="boots")
{
if(me->query_temp("can_get")==1)
        {
        message_vision("$N��ѽ�̵�, һ��СЬ��$N��������\n",me);
        ob=new("/open/scholar/room/newplan/obj/qboots");
        ob->move(me);
        }
        else
        {
        message_vision( "$NҪ��ʲô??$N��֪����??\n",me);
        }
if(me->query_temp("get_boots")==3)
        {
        message_vision("$N�̹��˰�???\n",me);
        }
return 1;
}
}
int do_search(string arg)
{
        object me;
        me = this_player();
        tell_object(me,"�㿴��һ����ɫ��СЬ������, ��Ӧ�ÿ����̵�(take boots)��\n");
        return 1;
}
