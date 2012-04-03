#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

object ob1=this_object();
int have_say;

void create()
{
set_name("����", ({"shin young","shin","young"}));
set("gender","����");
set("age",30);
set("class","prayer");
set("family/master_name","�ֺ���");
set("nickname","�ǻ�֮��");
set("attitude","heroism");
set("long",@LONG
    ������������������,���������������˺���ԭ�˵�Ѫͳ,
    ��̤��ʥ��̾ͱ�ʥ��̾�ʦ��֥֥����,��֥֥����һ
    ����ѧ��ı�Ժ���ѧ���ڸ�����,��ʥ������˼̾�ʦ��
    ��ְλ,����Ϊ����Ĵ����ͺ���Ľ̵�,ʹ������������
    ֥֥,�������,��������,ʹ���������Ϻ�������ͽ��
    Ϊ[�ǻ�֮��],�����˱��̻ʷ���Ϊ[������]������

LONG);

set("combat_exp",1000000);
set("title","��������");
set("kee",6200);
set("max_kee",6200);
set("force",9000);
set("max_force",9000);
set("max_gin",4000);
set("max_sen",4000);
set("force_factor",5);
set_skill("canon",80);
set_skill("holy-force", 70);
set_skill("superforce", 80);
set_skill("cure", 50);
set_skill("dodge", 70);
set_skill("force", 70);
set_skill("move",70);
set_skill("parry", 70);
set_skill("unarmed", 70);
set_skill("literate", 90);
set_skill("shift-steps",70);
set_skill("universe", 80);
map_skill("force","superforce");
map_skill("dodge","shift-steps");
map_skill("move","shift-steps");
map_skill("parry","universe");
map_skill("unarmed","universe");
set("chat_chance",5);
set("chat_msg",({
HIW+"����˵�������ߣ���֮���£�����֮�أ�����֮�������ɲ���Ҳ��\n"+NOR,}));

setup();

carry_object("/open/prayer/obj/emery-robe")->wear();
carry_object("/open/prayer/obj/hat")->wear();
carry_object("/open/prayer/obj/emery-armband")->wear();
carry_object("/open/prayer/obj/emery-belt")->wear();
carry_object("/open/prayer/obj/emery-firer")->wield();
add_money("gold",5);

create_family("������",5,"����");
}

void attempt_apprentice(object ob)
{
    if(!ob->query_temp("allow_8"))
  { command("say û�н�����ͬ�⣬�Ҳ�����������������ţ�");
    return 0;
  }
  command("smile");
  command("say ����������֮����ͱ���Ա������Ĳ��������ɻ���˽�ģ�֪���𣡣�");
  command("recruit "+ob->query("id"));
  ob->set("marks/ʥ�������",1);
  this_player()->set("title","ʥ����������׼ҵ���");
}
void greeting(object ob)
{
  if (ob->query_skill("poison",1))
//if ((present("five poison", ob)) || (present("drak poison",ob)) || (present("faint poison", ob)) || (present("rose poison", ob)))
  {
   command("say �������������ѧ�ж���֮�ˣ�ɱ��뷣���");
   kill_ob(ob);
  }
   if(ob->query("class") == "dancer" )
     {
      command("say ���������������----��ɱ���ۣ���");
      kill_ob(ob);
     }
   return;
}
