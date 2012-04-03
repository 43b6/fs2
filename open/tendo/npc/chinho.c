#include <ansi.h>
inherit F_VENDOR;

string magic1();
string magic2();
string do_tendo();
string do_master();
string do_hawk();
string do_area();

void create()
{
	set_name("�����",({"chinho"}));
	set("long","½����ʦ��,��ȫ����������ѧ֮��,�ʽ�����֮λ�ø���ʦ��"
                   "!!\n");
        set("gender","����");
        set("class","taoist");
        set("combat_exp",1500000);
        set("attitude","heroism");
		set("age",91);
        set("title","����ɻ�������");
        set("str", 25);
        set("cor", 29);
        set("cps", 28);
        set("per", 24);
        set("spi", 25);
        set("int", 26);
        set("force", 3000);
        set("max_force", 3000);
        set("max_mana",2000);
        set("mana",2000);
        set("max_atman",2000);
        set("atman",2000);
        set_skill("literate", 70);
	set_skill("cure",60);
	set_skill("taoism", 100);
	map_skill("cure", "taoism");
	set_skill("magic",80);
	set_skill("gmagic",90);
	map_skill("magic","gmagic");
	set_skill("spells",80);
        set_skill("necromancy",90);
	map_skill("spells","necromancy");
        set_skill("force",50);
        set_skill("gforce",80);
        map_skill("force","gforce");
        set_skill("dodge",40);
        set_skill("g-steps", 70);
        map_skill("dodge","g-steps");
        set_skill("parry",60);
        set_skill("whip",70);
        set_skill("gwhip",70);
        map_skill("whip","gwhip");
        map_skill("parry","gwhip");
        set("force_factor", 30);
		set("inquiry",([
        "�����" : (:do_tendo:),
        "½���" : (:do_master:),
        "��ӥ" : (:do_hawk:),
        "�����ɾ�" : (:do_area:),
          ]));
        setup();
        carry_object("/open/tendo/obj/whisk")->wield();
        carry_object("/open/tendo/obj/hat")->wear();
        carry_object("/open/tendo/obj/shoe")->wear();
        carry_object("/open/tendo/obj/robe")->wear();
}
string do_tendo()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "����Ϊ����ɱ��Ż��ܣ�ƶ�����ܸ�֪���ˡ�";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"��������\n            ��ʵ�������������˼䣬��ʦ½������ʱ��ŵ�����ʹ�ߴ�սȺħ��\n            ����ȴ��ս���²���Ⱥ��Χ������ʦ����ӥ�����������γ�һ��ǿ\n            �������ס����Σ���˼䣬֮����Ȼ�����и����ɸ�����Ԯ������\n            ������ʦ�������ˣ��������������"NOR;

}

string do_master()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "û��˵����";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"��ʵ�����ս֮����ʦ���������أ��㽫����֮λ�������ʦ�ܣ���\n            Яͬ��ӥǰ�������ɾ��չ�������������ǰ�������������������"NOR;
}

string do_hawk()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "��˵����";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"�ţ���ӥ�˵�����ʦ��������ɽʱ�������������ɾ����ִ���������\n            �������ɵ���ӥ�����ڴ�ӥ��ͨ���ԣ�������ʦ���������ඥ����ӥ\n            �㳤������ɽ���������ػ�����ɵ�������Ρ�"NOR;
}

string do_area()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return "½���ҡҡͷ��˵����û��˵����";
  who->add("quest/ask_tendo_hawk",1);
  return HIY"�����ɾ�Ϊ��ʦ����֮������Ϊ��������أ������㻹��ȥѯ�����ʦ�ܰɣ�"NOR;
}

