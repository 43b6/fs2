inherit ROOM;

void create ()
{
  set ("short", "���±�");
  set ("long", @LONG
��һ������ߣ�����һ��������Ȼ��һ������׵����£�
����µ���ʯ�ǳ���������е����Ҫ����ȥ��!!!\n"
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "back" : __DIR__"aa52",
]));

  setup();
}
void init()
{
    object me=this_player();

    call_out("do_down",20,me);
}
int do_down(object me)
{
    if(!me) return 1;
    if(environment(me)!=this_object()) return 1;
    message_vision("$N����һ�����ȣ�����ɽ��ȥ��!!!\n",me);
    me->unconcious();
    me->move(__DIR__"aa0.c");
    return 1;
}

