//by casey

inherit ROOM;

void create ()
{
  set ("short", "һ����");
  set ("long", @LONG
������������������խ�ĵط� ,������ȥ���������Ϣ
֮�� ,����ͨ·�ƺ����ӳ�����������(rattan)�����
ס��,����Ҫ����������ǰ����...

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("evil", 1);
  set("no_auc", 1);



  set("item_desc", ([ /* sizeof() == 1 */
  "rattan" : "����������ƺ������ر��ï�ܣ��ܵ���ȫ�ڸ�\ס��ɽ�ڡ�
",
]));
         set("exits", ([ /* sizeof() == 1 */
  

  "north" : __DIR__"b10",
]));


  set("search_desc", ([ /* sizeof() == 1 */
  "rattan" : "�㲦����������Ȼ���ֺ��澹Ȼ�и�ͨ�������������ȴ��ȫ����������
��������ͨ��(pass)����
",
]));


  setup();
}

void init()
{
        add_action("do_pass", "pass");
}

int do_pass(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="rattan" )
                return notify_fail("��Ҫͨ��ʲô��\n");
        tell_object(who,"�����ֲ���������������ͨ�����˽�ȥ��\n");
        who->move("/open/mogi/dragon/d-2.c");
        tell_room(this_object(),"�㿴��"+who->query("name")+"������������ȥ����
Ȼ�Ͳ�����Ӱ�ˡ�\n");
        return 1;
}
