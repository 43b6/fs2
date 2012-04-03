// Room: /open/poison/room/eqroom.c
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
��������ħ��ͽ��Ϣ�ĵط� ,Ҳ���Ƚ��Ľ�ͽ��Ҵ��������� ,��
����ħ�̽�ͽ�����ָ߶ȵ��Ѱ� ,���� ,��������ħ��ͽ�����������
�����ĵط� ,���Ը�λʦ��ʦ��� ,�кö�����ֻ������ ,����Сʦ��
ʦ�ð� !�����и������(shelf)
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
"shelf" : "һ�����������ض��Ͼɵ���� ,���沼���˻ҳ� ,
��������ܵ����� ,ȴ����Ȼ��һ����Ⱦ ,��������ת
�����ϵ��鶼�ܾ��� ,���������ĺۼ����ǲ��� ,����
������� ,���Ѿ���ͼ������ ,�αطѾ���˼������
��������
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"room1.c",
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);
     set("no_clean_up",1);

  setup();
}
void init()
{
        add_action("do_turn","turn");
}

int do_turn(string str)
{
        object who;
        who = this_player();

        if(!str || str != "shelf")
                return notify_fail("����ת��ʲô��\n");
        else{
             tell_object(who,"\n�㽫���ת�� ,�����˺�ߵ����š�\n\n");
             who->move("/open/ping/room/road3.c");
             tell_room(this_object(),who->query("name")+"�����ת�� ,�����ص��С�\n");
            }
        return 1;
}
int valid_leave(object me, string dir)
{
if (dir == "down" && me ->query("class") != "poisoner")
  if ( !wizardp (me) )
     return notify_fail("ι ,��ȥ���� ?�뱻������\n");
     return :: valid_leave(me, dir);
}

