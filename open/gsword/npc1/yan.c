inherit NPC;
#include <ansi.h>
#include "/open/open.h"
int ask_sword();
int ask_tesin();
int ask_kking();
int ask_roger();
int ask_array();
int ask_fu();
int ask_shasword();
void create()
{
        set("title","�ɽ��ɵڶ�������"),
        set_name("������",({"yan"}));
        set("nickname",HIR"�������"NOR);
        set("class","swordsman");
        create_family("�ɽ���",2,"����");
        set("family/master_name","��ң��");
        set("family/family_name","�ɽ���");
        set("attitude","heroism");
        set("env/����","YES");
        set("gender","����");
        set("age",87);
        set("str",50);
        set("con", 44);
        set("int", 60);
        set("cps", 48);
        set("cor", 48);    
        set("long","�����ɽ��ɵڶ������ӣ�֣ʿ��֮ʦ�壬��Ϊ�Կ�Ѫħ������������\n");
        set("combat_exp",4000000);
        set("max_gin",10000);
        set("gin",10000);
        set("max_kee",30000);
        set("max_force",10000);
        set("force",10000);
        set("kee",30000);
        set("max_sen",10000);
        set("sen",10000);
        set("functions/swordkee/level",100);
        set("functions/sha_kee/level",100);
        set("functions/sunswordkee/level",100);
        set_skill("dodge",100);
        set_skill("unarmed",90);
        set_skill("parry",120);
        set_skill("sword",120);
        set_skill("sun_fire_sword",100);
        set_skill("sha-steps",100);
        set_skill("shaforce",150);
        set_skill("force",130);
        set_skill("array",100);
        set_skill("sha-array",100);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","sun_fire_sword");
        map_skill("parry","sun_fire_sword");
        set("force_factor",20);
        set("inquiry",([
  "�ɽ�����" : (: ask_sword :),
  "��������" : (:ask_array:),
  "������" : (:ask_roger:),
  "�����߾�ն" : (:ask_fu:),
  "������" : (: ask_tesin :),
  "Ѫħ" : "�����Ϊ��������ݱ�����ֵ�ħ��,��ʹ��ʱ����������ֽ��Ⱥ���ʧ����Ȼ������ʦ����ң��",
  "����������" : "�����������ǵ���ʦ��Ϊ�˶Ը�Ѫħ���˴��죬��˵Ҫ����ӡ�迿���ɴ��ˣ�������������ܿ�����~",
  "��ң��" : "����ʦ����..������һ��żȻ��..ʦ�����Ҽ��еĽ���..Ҳ������ǰһ���Ӵ�����Ľ��������߾�����ֻ��ʦ����ѧ��һ����..",
  "�ɽ�Ͽ��" : (:ask_shasword:),
]));
set("get_sha_sp", 1);
set("quests/sunfire",1);
set("chat_msg_combat",({
        (: perform_action,"sun_fire_sword.sunswordkee" :)
  }));
        setup();
carry_object("/open/gsword/obj/dragon-sword.c")->wield();
carry_object("/open/gsword/obj1/ring.c")->wear();
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
        add_money("gold",5);
}
int accept_fight(object who)
{
 fight_ob(who);
 command("perform sun_fire_sword.sunswordkee");
 return 1;
}
int accept_kill(object who)
{
command("say ����֪����������������\n");
set("have_kill_me",1);
 kill_ob(who);
command("perform sun_fire_sword.sunswordkee");
return 1;
}
void init() {
  object obj;
  ::init();
  if(interactive(obj=this_player()) && !is_fighting())
     {
      remove_call_out("greeting");
      call_out("greeting",1,obj);
     }
}

void greeting(object ob)
{
        command("hmm");
        command("wear all");
}

int ask_sword()
{
  object me;
  me=this_player();

command("say ����ʦ���ľ���������..����ն������..���ѳ�Ϊ��ħ�Ŀ���..����Ϊ��ӡѪħ..�ѽ�������ɿ�����������������һ��֪��..��\n ");

       return 1;
}
int ask_tesin()
{
  object me;
  me=this_player();
  command("say ��ʦ������Ҳ���ڵ����ս����ʧ��Ӣ��֮һ..������ȷ������ħ�� ");
  return 1;
}

int ask_fu()
{
  object me=this_player();
  if (me->query("quests/sunfire")==1)
  command ("say �㲻���Ѿ�����?");
  else if (me->query("quests/yan")<5)
  {
  command ("say �����߾�ն..�����������ڷ���ħ��ʱ���������...��");
  command ("say �������ѧ..���ͨ���ɽ�Ͽ��,��ͨ����������..������ʸ����ѧ�����߾�ն��");
  if (me->query("quests/yan")<1) me->set("quests/yan",1);
  }
  else if(me->query("quests/yan")==5)
  {
  command ("say ��Ȼ�㶼�õ���֤��...���ҾͰ������߾�ն��Ҫ�����˵...��");
  message("system",HIY"�����ƿ�ʼ�������߾�ն�Ļ�����������"+this_player()->name()+"��\n"NOR,users());
  message_vision("$N���ŷ����Ƶ�ָ���������߾�ն������һ�顣\n"NOR,me);
  command ("say �Ժ����������perform sun_fire_sword.sunswordkee ��ս����ʹ�������߾�ն..��");
  me->set("quests/sunfire",1);
  }
}
int ask_shasword()
{
 object me=this_player();
 command ("say �ɽ�Ͽ�����ɽ��洫����֮��..���ڼ�Ϊ����..����Ѿ���������.��");
 command ("say ����Ҳ�����ǵ�������ɽ����...ȷʵ�ص�..�������ǰ����ɽѰ�ҡ�");
 me->set_temp("quests/yan",1);

}

int ask_array()
{
object me=this_player();
if(!me->query("quests/sblood")) return 1;
else
{
command("say ��������....");
command("say ���ڵ����ҵ�ħ�����Ϊ��Ҫ���������������,�����ҷ�������ʱ,���˷���ħ�������壬�Żᱻ����ħ�����ܣ����������������������䣬����..���������ǰ��ħ�����..���Ǿ�˵Ҫ���������Ҫ����׼�����ǳ������ܽ���ġ�");
}
}
int ask_roger()
{
command("say ������....����˸��ɽ����ƺ��м����ԨԴ..������ħ����������..������������һ���棬��˵���ǽ��ϸ��¥��¥�������ǿ����Ĵ�磬�ƺ��Ѿ��������������...");
return 1;
}
