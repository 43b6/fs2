#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
set ("short",HIC"��ڣ"NOR);
set ("long", @LONG

������Сͨ����������һ���޴�Ķ�Ѩ֮�У�ֻ�����ܵ���������
������С��һ�ķ�Ĺ������һ�����ķ�Ĺ�ϲ���һ������а���ĵ�
�з���Ĺ����(stone)�ƺ��ж���, �������˷ܵ������(seek)һ��

                                 (��)
                                  ��
                                               
                        (��)��    ��    ��(ľ)
                                 (��)
                               ��������
                              (ˮ)  (��)

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
"stone" :"Ī��--�ᵶ����Ѩ��\n",
]));
  set("exits", ([ /* sizeof() == 1 */
"jump":"/open/gblade/room/mrm1/r4.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);
  setup();
}
void init()
{
add_action("do_search","seek");
add_action("do_put","push");
}
int do_search(string str)
{
  object ob,ob1;
  ob=this_player();
  if(ob->query_temp("sublade") != 9)
    return notify_fail("��˿��Ѱ�Ҳ����κ���״!!!\n");
if( str != "��" )
    return notify_fail("����ȫѰ�Ҳ����κ���״!!!\n");
message_vision("����$Nϸ�ĵĵ���֮��$N����ÿ����Ĺ��Ĺ������Բ�İ�����\n",ob);
message_vision("�ƺ�����ʯͷ�ƽ�ȥһ��(push)��\n",ob);
  ob->set_temp("can_put",1);
  return 1;
}

int do_put(string str)
{
mapping stones = ([
"gold-stone in ľ" : 1,
"wood-stone in ��" : 2,
"earth-stone in ˮ" :3,
"water-stone in ��" :4,
"fire-stone in ��" : 5,
"heart-stone in ��" :6,
]);
object ob=this_player();
string name,str1,str2;
object superblade;
if(ob->query("evil-mblade")==1)
return notify_fail("������������ˣ���\n");
if(ob->query_temp("can_put") != 1)
return notify_fail("��Ҫ��ʲô����ѽ!!!\n");
if( !str || sscanf(str, "%s in %s", str1, name) != 2 )
{
message_vision("�� push xxx in xxx\n",ob);
}
else if(stones[str]) {
message_vision(HIW"���ʯͷ�����Ĺ����ʱ��Ĺ�¸����죡\n"NOR,ob);
if(stones[str]==1) ob->set_temp("su1",1);
if(stones[str]==2) ob->set_temp("su2",1);
if(stones[str]==3) ob->set_temp("su3",1);
if(stones[str]==4) ob->set_temp("su4",1);
if(stones[str]==5) ob->set_temp("su5",1);
if(stones[str]==6) ob->set_temp("su6",1);
} else {
message_vision(HIR"���ƴ�ʯͷ����ʱ����Ĺ�е�������ȥ���ǣ�\n"NOR,ob);
ob->unconcious();
}
if(ob->query_temp("su1")==1&&ob->query_temp("su2")==1&&ob->query_temp("su3")==1
&&ob->query_temp("su4")==1&&ob->query_temp("su5")==1&&ob->query_temp("su6")==1)
{
log_file("mblade/GET_MBLADE",sprintf("%s(%s) �⵽ �������� on %s\n"
,ob->query("name"),ob->query("id"),ctime(time()) ));
message_vision(HIW"��ʱ�м�ķ�Ĺ�������¸����졣\n"NOR,ob);
message_vision(HIY"��ʱ�м��ǰѵ��㻬���������ϡ�\n"NOR,ob);
superblade=new("/data/autoload/blademan/evil-mblade1.c");
superblade->move(ob);
ob->set("evil-mblade",1);
}
return 1;
}

