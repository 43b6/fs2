#include <ansi.h>
inherit NPC;
string ask_yao();
string ask_array();
string ask_sunsword();
string ask_bloodking();
string ask_god();
string ask_array2();
void create()
{
set_name(HIW"������"NOR,({"tesin long","tesin"}));
set("long","��˵�еĴ�ʦ..�����������Ĵ�����.��ƽ�¼���Ϊ������֪..���ʽ���������.\n");
        set("gender","����");
        set("class","swordsman");
            set("family/family_name","�ɽ���");
            set("combat_exp",14000000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 5000);
        set("age",120);
        set("title",HIY"��ʦ"NOR);
            set("str", 50);
            set("cor", 50);
            set("cps", 50);
            set("con", 50);
            set("int", 50);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 30000);
            set("kee",30000);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("force",250000);
            set("max_force",2500000);
            set_skill("literate",120);
            set_skill("magic",100);
            set_skill("spells",100);
            set_skill("sun_fire_sword",100);
            set_skill("shaforce",150);
            set_skill("sha-steps",100);
            set_skill("sha-array",100); 
        set_skill("array",100);
        set_skill("move",120);
        set_skill("force",300);
        set_skill("dodge",120);
        set_skill("parry",120);
        set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","sun_fire_sword");
        set("force_factor",50);
                set("inquiry",([
        "��ң��"   :  (: ask_yao :),
        "��������"   :  (: ask_array :),
        "�ɽ�����" : (: ask_sunsword :),
        "Ѫħ" : (: ask_bloodking :),
        "��ʥ��": (: ask_god :),
        "����������" : (:ask_array2:),

        ]));
        setup();
        add_money("gold", 10);
        set("get_sha_sp", 1);
        set("chat_chance_combat",90);
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        carry_object("/open/gsword/obj/dragon-sword")->wield();
        create_family("�ɽ���",2,"��������");
}

string ask_yao()
{
command("say ��˵������ң������?���Ѿ���ʧ�ܾ���.����ʥ����սѪħ��..��û����������");
 return("����..��˵��������Ѱ�����ټ�.��˵Ϊ����Ѱ��ң�ӵ�����..���Ѿ���ʧ����һ������ !\n");
}
string ask_array()
{
 return("��������������ң�ӴӴ���ħʦ-��������-ѧ��ר�ſ���Ѫħ����. !\n");
}

string ask_sunsword()
{

command("say �ɽ�����..����ң��˵..����ħʦ���������������ħʥ��.���ϲ�������ħ����..");
 return("��������ħʦ����εõ�����...!\n");

}

string ask_bloodking()
{

 return("Ӧ���Ѿ�����ӡ��������������..����������������..���ܵ�ȥ���ʷ������� !.\n");

}

string ask_array2()
{

command("say ������ħʦ����������˵����������Ϊ��ѹ��Ѫħħ��..��˵����м���... !");
command("say �����������˼���ʥ����������..���Ͽ���������֮�������γ�֮�οռ� !");
 return("Ŀǰ�����еĿ���������..����Ϊ�󲿷������ѱ�������..��������Ѳ��������ķ���֮һ !\n");

}
string ask_god()
{

command("say ��ʱ..��ң�Ӻ�����ʥ..�������˵�ʱ����������ŷ����˾���ƾ������ħ��ս!");
 return("֮��..���������ɽ����������Ƿֱ�������ר������...��������..��Ҫȥ�ʱ�����!\n");

}

