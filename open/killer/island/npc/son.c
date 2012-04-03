//open/killer/island/npc/son.c
inherit NPC;     //³Ѱ
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string father_dream();
string island();

void think(object);
void create()
{
set_name("³Ѱ",({"lu"}));
set("long","
����������������孵�ó������. ���˶��֮��, ��Ҳʱ���������������
����ó��, ��һλʮ����������������.
\n");
  set("gender","����"); 
  set("class","killer");
  set("title","ó����");
  set("attitude","heroism");
  set("age",31);
  set("max_kee",1500);
  set("kee",1500);
  set("max_force",1000);
  set("force",1000);
  set("force_factor",10);
  set("combat_exp",700000);
  set_skill("dodge",70);
  set_skill("move",70);
  set_skill("force",70);
  set_skill("parry",60);
  set_skill("shade-steps",60);
  set_skill("blackforce",60);
  map_skill("move","shade-steps");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");
  set("inquiry",([
"���׵�����" : (: father_dream :),
"��孵�" : (: island :),
]));

setup();
add_money("gold",10);
}
void init()
{
        add_action("do_nod","nod");
}

string island()
{
 object ob,obj;
 object me;
 ob=this_object();
 me=this_player();
 
if (me->query("class") != "killer"|| !me->query_temp("firstpart") )
{
  command("?");
  return "....��˵ʲô��....��...��֪��";
}
  command("grin");
  command("say �㿿���ң���С���ĸ�����......");
  set_name("���ɱ��",({"Japan killer","killer"}));
  this_object()->set("combat_exp",1500000);
  this_object()->set("max_force",3800);
  this_object()->set("gin",2000);
  this_object()->set("sen",2000);
  this_object()->set("max_kee",8000);
  this_object()->set("kee",8000);
  this_object()->set("eff_kee",8000);
  this_object()->set("force",3800);
  set_skill("dodge",80);
  set_skill("move",80);
  set_skill("parry",80);
  set_skill("throwing",80);
  set_skill("rain-throwing",70);
  set_skill("shade-steps",85);
  obj=carry_object("/open/killer/obj/lustar");
  obj->add_amount(1000); 
  obj->wield();
  ob->kill_ob(me);
  message_vision(HIR"$NͻȻ��$n��������!!!!!\n"NOR,ob,me);
  return "��ƾ��Ҳ�뵽��孵�ȥ�������������ҵ����°�......";
}

string father_dream()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
if (me->query("class") != "killer"|| me->query("quest/island") > 0)
{
  command("?");
  return "�Ҹ�����ô����?";
}
  command("scream");
  return "��? ����ô��֪�������? �Ҹ��׸���Ļ���������ҿ�һ����?";
}
int accept_object( object me , object ob ,object obj )
{

if (me->query_temp("get_luamulet") == 1 && ob->query("id") =="luton's amulet")
{
 new("/open/killer/island/obj/luamulet")->move(me);
 command("say �����鷳����,�Ҵ�ʮ����ǰ�Ϳ�ʼ�Ӷ������,ϣ���ܼ̳и��׵�����.");
 command("say ������ʼ�ղ����ٸ���������������....");
 command("say ��������⻤���������,��һ��Ҫ�һظ��׵�����ʧȥ��һ��!!");
 command("say ��Ը������һ��֮����??");
 me->delete_temp("get_luamulet");
 me->set_temp("nod",1);
 return 1;
}
if (me->query_temp("get_note") == 1 && base_name(ob)=="/open/killer/island/obj/note")
{
 command("hmm");
 command("think");
 command("ԭ�����....");
 tell_object(me,"³Ѱ������ֽ�������ݷ��������....\n");
 call_out("think",3,me);
 return 1;
}
else
{
 command("angry");
 command("gozila");
 command("dandan "+me->query("id"));
 command("say ��Ҫ���ö���������!!�ҵ�������Ҫ��Ǯ��!!");
 return 1;
}
}
int do_nod()
{
  object me=this_player();
  if (me->query_temp("nod") != 1)
{
 return 0;
}
  if (me->query_temp("nod") == 1)
{
 command("jump");
 command("say ̫����, �����߰�!!");
 me->delete_temp("nod");
 tell_object(me,HIC"\n��һ��׼��������,����³Ѱ��һЩ��Ա,һͬǰ�����.\n\n"NOR);
 me->move("/open/killer/island/ship");
 return 1;
}
return 1;
}
void think(object me)
{
tell_object(me,HIY"\n
ԭ��,���Ӳ��������˵�Ů��,���Ǻ��������Ů��,���ڸ��Ÿ��׵�������,�����ܵ���
��̽��δ֪����������������Ը,������Ϊ�޷����ܸ��׼��������ײе���Ϊ,��Ȼ��
���뿪���Ƕ������Լ���ð������,ֱ��������³��,���ڷ��ֳ���������������������
�ܸ���һ��Ŭ�������.��������Ը�վ��޴���,��³�ڱ�����ʱ ,�������Իص�����
��Ϊ��������ȡ�����ĳ���.�¸�����,����������Ϊ��������Ժ�����ɨ������������
С����.���������������һ��:�ҽ�����ҵĶ������Լ����ǵ���������������ǵĸ�
��֮��.

Ȼ��, ����������������ǵĸ���֮��??��仰��ʲô��˼��??
\n"NOR);
call_out("t1",1,me);
return ;
}
int t1(object me)
{
command("giggle");
command("say ��΢��Ϣһ�°�, ��ֻ�����������޺���.");
call_out("t2",1,me);
return 1;
}
int t2(object me)
{
tell_object(me,"\n����һ���æµ, Ҳ�ó����ںú�˯һ����....\n\n");
me->move("/open/killer/island/tent.c");
call_out("t3",5,me);
return 1;
}
int t3(object me)
{
tell_object(me,HIY"
��֮���˶��, ��Ҳ������, ���������ܾ�����Щ���鲻�Ծ�, ������˵������...
˯��һ��ʱ��, ����Ҳ��������������ֻ�޸�������. \n"NOR);
call_out("t4",2,me);
return 1;
}
int t4(object me)
{
me->move("/open/killer/island/is4.c");
command("hi");
command("say �������, �컹û����������.");
command("say ��ֻ���޺���, ��ȥ׼��һ�°�, �ȴ�ֻ�޺þͿ����뿪��.");
me->set_temp("can_search",1);
return 1;
}

void die()
{
	string head;
	object winner = query_temp("last_damage_from");
	int j;
	if(!winner){
      		::die();
      		return ;
    	}
	
	if ( winner->query_temp("firstpart")==1 )
	{
	  message_vision(HIM"\n$N��ϸ������ʬ�壬���ִ��˾�Ȼ������Ƥ��ߣ�\n"NOR,winner);
	  message_vision(HIM"\n$N����һת��Ī��³Ѱ�⵽���⣿\n"NOR,winner);
          message_vision(HIM"\n$N����ʬ�壬��û�з����κ�����.....\n"NOR,winner);
          message_vision(HIM"\n$N�����˼.........................\n"NOR,winner);
          message_vision(HIM"\n$N.................................\n"NOR,winner);
          message_vision(HIM"\n$N���ɱ��...��ǰ��������ֹ��أ�.......\n"NOR,winner);
          winner->set_temp("firstpart",2);
	}
      :: die();
}

