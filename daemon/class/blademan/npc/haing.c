inherit NPC;
string do_ask (object me);
#include "/open/open.h"
#include <ansi.h>
void create()
{
set_name("���Ӻ�", ({ "hiang",}) );
set("long", "
����ħ�����״�Ů���ӣ������Ƴݣ�һ˫��Ҷü��Զɽ���°����
���飬��ӯ��˫Ŀ����ˮ���������ڣ�üĿ��һ������֮���Գ���
�۵Ĳ��������Ͻ���һ��ԡ�ۣ���¤������������֡�\n");
set("title","ħ���״�����Ů����");
set("nickname", HIC"�������"NOR);
set("age", 25);
set("family/family_name","ħ����");
set("int", 35);
set("m_blade",1);
set("cps", 35);
set("str", 35);
set("cor", 35);
set("spi", 35);
set("con", 35);
set("have_book",1);
set("kar", 35);
set("per", 35);
set("force_factor", 20);
set("combat_exp",1500000);
set("force", 4000);
set("max_force", 4000);
set("max_kee", 4000);
set("kee", 4000);
set("env/get_mblade","YES");
set("env/ħ����ն","YES");
set("mpower",1);
set("bellicosity", 2500);
set_skill("blade", 120);
set_skill("dodge", 105);
set_skill("parry", 105);
set_skill("force", 50);
set_skill("literate",105);
set_skill("dragon-blade", 120);
set_skill("powerforce", 95);
set_skill("unarmed", 50);
set_skill("move",50);
map_skill("force", "powerforce");
map_skill("parry", "dragon-blade");
map_skill("blade", "dragon-blade");
set("chat_chance_combat", 60);
set("chat_msg_combat", ({
(: perform_action, "blade.mdragon-dest" :),
}));
set( "gender", "Ů��");
set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );     
set("attitude", "peaceful");
set("chat_chance", 2);
set("chat_msg", ({
"���Ӻ��ɻ�����Ŋ��� \n",
"���Ӻ��ʵ�������λ���������� ...? ��\n",
}));
set("inquiry",([
"�������" : "������֪������������������������콣��������!\n",
"����콣" : "�����ɽ��ɿ�ɽ��ʦ��ң�ӵ��彣!\n",
"������"   : "�������ǽ���������ʼ�����֮�嵶!\n",
"��ڣ":"�ഫ��һ�����������õ��ĵط�����������˵����˵ʦ��Ī�⵱���ɨ����ʱ�����õĵ����Ǵӵ�ڣȡ���ģ�֮���ǰѵ��ͳ�Ϊħ�����֮����\n",
"�����" : "�����Ҳ��̫���,ֻ������������ϲ���Է�˵�!\n",
"��˵�" : "��˵�ڸߴ����ͩ���Ͼ�����������!\n",
        ]));
set_temp("apply/armor",45);
set_temp("apply/damage",45);
     setup();
     carry_object("/daemon/class/blademan/obj/blade1.c")->wield();
     carry_object("/daemon/class/blademan/obj/cloth1.c")->wear();
     carry_object("/daemon/class/blademan/obj/belt1.c")->wear();
     add_money("gold",10);
}
 
void greeting(object ob)
{

           if( ob->query("gender")=="����")
        {
         command("say �� �� ��ɫ�� �� �������� ��" );
        kill_ob(ob);
   }   }
int accept_kill(object who)
{
  who=this_player();
  command("kill "+who->query("id"));
  command("perform blade.mdragon-dest");
  return 1;
}
