#include <ansi.h>
inherit NPC;
inherit F_MASTER;

string magic1();
string star1();
string star2();
string star3();

void create()
{
	set_name("ƽ��ţ",({"pin"}) );
        set("long","һ����ò��Ȼ��"HIW"����"NOR"������������ҡײƭ����������һ����������д�š�����ֱ�ϡ��ĸ����֡�
���Ի�д������С��--��֪"HIW"����"NOR"����֪����\n");
        set("gender","����");
        set("class","officer");
        set("combat_exp",60000);
        set("attitude","friendly");
        set("age",62);
	set("title","����ֱ��");
        set("str", 25);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 26);
        set("force", 200);
        set("max_force", 1000);
        set("max_mana",200);
        set("max_atman",150);
        set_skill("security",100);
        set("force_factor", 10);

	set("inquiry",([
	"����" : (:magic1:),
	"����" : (:star1:),
	"����" : (:star2:),
	"����" : (:star3:),
	]));
        set("chat_chance", 30);
        set("chat_msg", ({
        "ƽ��ţ���˵����ϵ����ӣ�����¶�������Ц��^O^\n",
        "ƽ��ţ˵��: ��λʩ����������������������������²�˳��Ҫ��Ҫ�������!\n",     
        "ƽ��ţ����˵��: ������..����ֱ�ϣ���׼��ҪǮ���������ֽ��֣�û�ַ�������\n",           
        }));
        setup();
	add_money("silver",3);
}

string magic1()
{
 object who=this_player();
 command("say ���Ϸ���������");
 command("cmd askgod "+who->query("id"));
 return "��һ������ʮ��������лл�ݹˡ�";
}

string star1()
{
 return NOR"��������������ʶ����ˡ�����Ҫ�ʸ�"HIW"���ǣ�����"NOR"��û��������"NOR;
}

string star2()
{
  
  message_vision (HIC"ƽ��ţ˵��: ����򵥣�����������࣬��诣��������Ȩ����⣬�������������߿��϶������\n",this_object());
  write(HIC"�㲻������: ���գ�....�϶�����?....����˵Ļ�����ס��\n"NOR);
  return "hmm....����С���⣬����ʮ�����Ӿͺ�";  
}

string star3()
{
 object who=this_player();

 message_vision (HIC"ƽ��ţ˵��:���Ǿ������Ǽ�̫����!!..���ⶼ������С����Ҫ�ú�����֪����!\n",who);
 command("pat "+who->query("id"));
 write("�����������ƭ�ĸо�....>.<\n\n");
 return "�����㲻���憈�飬����һ���ƽ�";
}

int accept_kill (object who)
{
  command ("shout �ۣ�....ǿ����....ɱ����ɱ����!!�����˰�....\n");
  command ("flee");
  return 1;
}
