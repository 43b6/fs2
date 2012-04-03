// /open/center/npc/vendor.c
#include <obj.h>
#include <ansi.h>
#include "/open/open.h"

inherit F_VENDOR;
string ask_test();
string ask_standby();

void create()
{
      set_name("������С����", ({ "sale girl", "girl" }) );
      set("nickname","[31mС����[0m");
        set("gender", "Ů��" );
        set("age", 18);
        set("long", @LONG
  һ���ڿ���ռ���������������СŮ��, ������������,
���ͤͤ������С����, �����������Ѱ���ˣ����, ��
�Ǿ�����·������Ǯ��ү�۸�������û�����Ҫ������,
������������Ը, �������⺮��Ķ�����һ���·���, ��
��, û���·��Ļ�, ��һ�����˰�, ����, ��ֻ��һֱ��
FS������ȥ....
    ����������������(standby)�������ĺ�����......

LONG);
        set("attitude", "friendly");
        set("rank_info/respect", "С����");
        set("combat_exp",180);

        set("vendor_goods", ({
            CENTER_OBJ"torch",
            CENTER_OBJ"map",
        }) );

        set("chat_msg", 5);
        set("chat_msg", ({
           "С����˵��: ˭�ܸ����·�����������Ү��\n",
           "С������������·�,�۽��������˵��: ���ܸ���һ���·���?\n",
           "С���ÿ��������˵��: ����ȼ�һ����!��\n",
           "С���ð����˵��: �ܲ��ܴ���(standby)����������\n",
        }) );
set("inquiry",([
   "����ӡ��" : (:ask_test:),
   "standby" : (: ask_standby :),
      ]));



        set("greeting_msg", ({
         "С����˵��: ���ĵĴ�үС���ǣ����ľͷ�����հɡ�\n",
         "С���ÿ��������������: ��λ���ĵĴ�үС�㣬����Ԯ�־����Ұɡ�\n",
         "С��������������˵: ���ĵĴ�үС�㣬·���˵أ��ѵ�����������?\n",
         "С���ð����˵��: �ܲ��ܴ���(standby)����������\n",
        }) );
        setup();
}

int accept_object(object who, object ob)
{
  object        me;

  seteuid(getuid());
  me = this_object();

  if (who->query("quests/sale_girl") == 0) {
    message_vision("СŮ��˵��: лл$N�ʹ͡�����������Ϊ�������õ�һ����Ǯ"
        "�Լ���ʣ��һ��ľͷ��һ�ŵ�ͼ�͵��ɻر�������Ц�ɡ�\n",who);
    who->pay_player(100);
    who->set("quests/sale_girl",1);
    new(CENTER_OBJ"torch")->move(who);
    new(CENTER_OBJ"map")->move(who);
    who->save();
    return 1;
  }
  else {
    message_vision("СŮ��˵��: лл$N�ʹ͡�\n",who);
    return 1;
  }
}

string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
  if(this_player()->query("quests/sale_girl",1) && this_player()->query("quests/yantestmark1",1) && this_player()->query("quests/2ndtest",1))
  {
  int i;
  i=6+random(5);
  command("say лл���İ�æ.��Ը�⽫appo���ҵ�ӡ�Ǵ���������!\n");
  tell_object(this_player(),HIW"˲����������С���ý��ִ�����ļ���..���ʱ����һ��ů����С���õ����д�����\n"NOR);
  this_player()->set("quests/2ndtest",i);
  this_player()->set("quests/yantestmark2",1);
  return("���һ��ӡ����ʥ��������,�����ȥ����������\n");
  }
 else if (this_player()->query("quests/yantestmark2")>1)
  return ("���Ѿ���ӡ�Ǹ�����..�㻹Ҫ��ʲô\n");
 else
  return ("����������..�Ҿ͸���˵ӡ������\n");
 }
else
 return ("ɶӡ��..����˵ʲô?\n");
}

string ask_standby()
{
  string *places = ({
    "/open/firedancer/t01.c",
    "/open/hall/way1.c",
    "/open/killer/room/r1.c",
    "/open/killer/room/ru3.c",
    "/open/marksman/room/shop.c",
    "/open/newhand/newhand.c",
    "/open/port/room/port.c",
    "/open/bonze/room/big.c",
    "/open/start/room/f1.c",
    "/open/tensan/room6.c",
    "/open/wu/room/luroom1.c",
    "/open/badman/room/s2.c",
    "/open/capital/room/r01.c",
    "/open/doctor/room/r4.c",
    "/open/gblade/room/c2.c",
    "/open/heaven/castle/room/n5.c",
    "/open/love/room/room2-14.c",
    "/open/mogi/castle/room10.c",
    "/open/mogi/village/room/room-07.c",
    "/open/prayer/room/happy.c",
    "/open/beggar/room/room01.c",
    "/open/center/room/r10.c",
    "/open/evil-area/e01.c",
    "/open/island/room/i1.c",
    "/open/magic-manor/manor04.c",
    "/open/mon/hole.c",
    "/open/ping/room/f2.c",
    "/open/snow/room/hole.c",
    "/open/tailong/room/d3.c",
    "/open/wind-rain/43.c",
    "/open/biau/room6.c",
    "/open/dancer/room/roome2.c",
    "/open/fire-hole/f-48.c",
    "/open/gsword/room/froad2.c",
    "/open/poison/room/room10.c",
    "/open/scholar/room/wind_s.c",
    "/open/soldier/room/r36.c",
    "/open/tendo/room/r3.c"
  });

  if (this_player()->query("standby") < 1) {
    this_player()->add("standby", 1);
    this_player()->move (places[random(sizeof (places))]);
    return "say лл���İ�æ, ��Ը����������!\n";
  }
  else {
    this_player()->move (places[random(sizeof (places))]);
    return "say лл���İ�æ��\n";
  }
}
