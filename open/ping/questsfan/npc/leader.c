inherit NPC;  //����ͷ by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>
string do_help();

void create()
{
    set_name("����ͷ",({"mercenary leader","leader","mercenary"}) );
    set("title",""HIY"����"NOR"�ھ�");
    set("gender", "����");
    set("age",120);
    set("attitude", "peaceful");
    set("long", ""CYN"���������ھ�����ͷ����ǰ����ͷɽ��ǡһ�ݺ��ڣ�˭\n"
                    +"֪·������أ�ȴ�����������ӣ����޷��԰���������\n"
                    +"���������ڴ����ڵȺ���ĵĹ�·������zԮ�֩{����\n"
                    +"һ�ѡ�"NOR"\n");
    set("kee",2600);
    set("max_kee",2600);
    set("combat_exp",100000);
    set("class","blademan");
    set_skill("move",40);
    set_skill("force",80);
    set_skill("dodge",60);
    set_skill("parry",70);
    set_skill("blade",100);
    set_skill("gold-blade",90);
    set_skill("fly-steps",80);
    set_skill("sixforce",80);
    set_skill("fast-blade", 90);
    map_skill("blade","fast-blade");
    map_skill("parry","gold-blade");
    map_skill("dodge","fly-steps");
    map_skill("move","fly-steps");
    map_skill("force","sixforce");
    set_temp("apply/armor",100);
    set("force_factor",10);
    set("inquiry", ([
                     "Ԯ��"         : (: do_help :),
    ]));
    setup();
}
int accept_kill(object who)
{
  return 1;
}
int accept_fight(object who)
{
  return 1;
}
string do_help()
{
        object me=this_player();
        object room = environment(this_object());
//      if( me->query("family/family_name")=="�μ�") //&& me->query("marks/six_sp")<=2)
//      {
          me->set_temp("helpman",1);
          return("���У����У�.......����Ⱦ��ҩzhelpleader�{");
//      }
//      else
//      {
//        command("sigh"+me->query("id"));
//        return("�㲻�Ƕν����ҵ����ˣ��Ҳ�����!!");
//      }
}
void init()
{
  remove_call_out("greets");
  call_out("greets",1,this_player());
  add_action("do_nod","helpleader");
}
void greets(object me)
{
  command("help!");
}
int do_nod()
{
object me = this_player();
if(me->query_temp("helpman") != 1)
        return 0;
me->set_temp("helpman",2);
remove_call_out("greeting");
call_out("greeting",1,me);
 return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("helpman") != 1)
        return 0;
  me->delete_temp("helpman");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
void greeting(object me)
{
  object letter=new("/open/ping/questsfan/obj/letter.c");
  object ob = this_object();
if(me->query_temp("blade_ok")==0)
{
  command("smile");
  command("say лл��İ�æ�����������Ž��������ھ�
����ͷ�����ύ�����¶�������֮����һ��"HIR"���⡣"NOR"");
  letter->move(me);
  me->set_temp("helpman",2);
    me->set_temp("blade_ok",1);
}
else
tell_room(environment(this_object()),"���Ѿ�����лл!!!");
}
void greeting2(object me)
{
command("sigh");
tell_room(environment(this_object()),HIC"ֻ������ͷʧ���Ĵ�����ڵ�����ûͬ���ġ�\n"NOR);
}
