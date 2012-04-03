//������ħ�������Ҫ�Ĺ���,����ҿ�����Ϣsave
//���е�͵Ĺ��ܸ���ɱ�ֵĲ���,ϣ��wataru��Ҫ����...........
//room:/u/e/eva/village/room/room-50.c        made by eva

#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create ()
{
  set ("short", "ħ����õ�");
  set ("long", @LONG

    ������ħ�����õ�, ����ħ�����ħ��ıܷ��, ��������ħ
���Ψһһ�ҵ��õ�, �ټ����������˵��ϰ�, Ҳ�ѹ�����ʱ������
�ſ���!
    ���﹩Ӧ�͵㼰���, �������ǽ������Ŀ����˵�(menu), ��
��������(list)!

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "menu" : "
               A.������           �۸�:50��
               B.����ħ����       �۸�:80��
               C.�𿾺�����       �۸�: 1��
               D.��ȸȫϯ         �۸�: 5��
����Ҫ��\�� , ���order <��\��>, ������������������ʳ��!

",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/mogi/village/npc/h_boss" : 1,
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_transmit", 1);
//   set("valid_startroom",1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/mogi/dragon/liuroom",
  "out" : __DIR__"room-46",
]));
  set("no_fight", 1);
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

void init()
{
    add_action("do_order","order");
}

int do_order(string str)
{
    object me;
    int foods,waters,moneys;
    me=this_player();
    if( str!="a" && str!="A" && str!="b" && str!="B" && str!="c" && str!="C" && str!="d" && str!="D")
        {
        return notify_fail("�����Լ�Ҫ��ʲô���������!?....\n");
        }
    switch(str)
        {
        case "a":
        case "A":
            {
            moneys=50;
            foods=50;
            waters=40;
            }
            break;
        case "b":
        case "B":
            {
            moneys=80;
            foods=85;
            waters=65;
            }
            break;
        case "c":
        case "C":
            {
            moneys=100;
            foods=120;
            waters=90;
            }
            break;
        case "d":
        case "D":
            {
            moneys=500;
            foods=400;
            waters=400;
            }
        }
    if(!me->can_afford(moneys))
        {
        return notify_fail("ûǮ�Ͳ�Ҫ���ү��!.....\n");
        }
    if((int)me->query("food") >= (int)me->max_food_capacity())
        {
        return notify_fail("���Ѿ��Բ����κζ�����!!.....\n");
        }
    me->pay_money(moneys);
if ((me->query("food")+foods)>me->max_food_capacity())
    {
    me->set("food",me->max_food_capacity());
    }
else
    {
    me->add("food",foods);
    }
if ((me->query("water")+waters)>me->max_water_capacity())
    {
    me->set("water",me->max_water_capacity());    
    }
else
    {
    me->add("water",waters);
    }
    tell_object(me,"�����̻��ʵ��������ϵ�ʳ��!...\n");
    return 1;
}

