inherit ROOM;
void create()
{
set("short", "���������");
set("long", @LONG
������һ¥ɱ�ֱ����ҵ�Ψһ��ڣ����Ǿ�Ȼû�п����κ���һ¥��ͨ����
������ɱ����̳���������ĵط����㻹�ǲ�Ҫ�������Ͽ��뿪�ɣ�
��˵��ֻ��ɱ���а취�����ķ����ܵ���һ���˺������л��ء���������

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"ru1.c",
]));

setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object me=this_player();
  int max;

  if (me->query("class") != "killer" )
  {
    message_vision("$N������ȥ���ڷ���һ�����أ������Ҷ��ˡ�\n", me);
    message_vision("$N�ǳ��˷ܵ�����ť��ȥ�����µ���һ˲��һ�����������\n",me);
    message_vision("$N�Ѿ���ʧ����Ӱ����\n", me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"һ���ײ�����㵯�ɣ���������֮��һֱ׹�䡣��������\n");
    me->move(__DIR__"firstrm.c");
    return 0;
  }
  if (!arg)
  {
    message_vision("$N�����Ĳ������أ�����һ�����µ�·��\n", me);
    set("exits/down", __DIR__"weaponrm.c");
    return 1;
  }
  else 
   return 0;
 }

int valid_leave(object me, string dir)
{
  int max;

  if (dir != "down") {
    this_object()->delete("exits/down");
    return 1;
  }
  if (me->query("class") != "killer")
  {
    message_vision("$N������ȥ������С�Ĵ������أ�˲��һ�����������\n",me);
    message_vision("$N�Ѿ���ʧ����Ӱ����\n", me);
    max=me->query("kee");
    max= (int) (max/2);
    me->add("kee",-max);
    tell_object(me,"һ���ײ�����㵯�ɣ���������֮��һֱ׹�䡣��������\n");
    me->move(__DIR__"firstrm.c");
    return 0;
  }
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;
}