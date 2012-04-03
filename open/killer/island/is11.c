// Room: /u/u/unfinished/room/is11.c
inherit ROOM;

void create ()
{
  set ("short", "С�ٲ�");
  set ("long", @LONG
��������, �˴�����ľ��û����ô����������. �˵����汻ɽ������Χ, ��
����ˮԴ�Ӷ����ɽ������, �γ�һ��С�ٲ�(waterfall),���������ʱ���ڴ�
ֻ�޷��޸�, ��ˮӦ��Ҳ����������. ����������ɽ, һ����ɭ��, ���粻��, 
ʮ��ů��.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "waterfall" : "һ����ɽ��������С�ٲ�,ˮ�ʳ���,���Ǻ�ˮ,��������(drink)Ӧ��û����.
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"is10",
]));
  set("outdoors", "/u/u");

  setup();
}

void init()
{
        add_action("do_drink", "drink");
}

int do_drink()
{
        object who;
        who = this_player();
                  if ((int)who->query("water") >= (int)who->max_water_capacity())
          {
            tell_object(who,"����ô��ˮ����?!�Һ�ˮС�ĳ��׳�!!\n");
            return 1;
          }
            tell_object(who,"\n����ٲ��к���һЩˮ....ζ�����Ǻܺ�!!\n");
            who->add("water",50);
            return 1;
}
