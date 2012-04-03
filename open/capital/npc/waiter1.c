// /d/snow/npc/waiter.c
#include </open/open.h>

inherit F_VENDOR;

void create()
{
	set_name("��С��", ({ "waiter" }) );
	set("nickname","���ͨ");
	set("gender", "����" );
	set("age", 22);
	set("long",
		"��λ��С����Ц������к����ˣ�����ʱ����ȥ�ʶ�������\n");
	set("combat_exp",110);
	set("attitude", "friendly");
	set("inquiry", ([
	"thief" : "��������͵���ЩС�Ѱ�..\n\n��С���Ĵ���������ǰ�ΰ��εġ�",
	]));
	set("rank_info/respect", "С����");
	set("vendor_goods", ({
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
        CAPITAL_OBJ"tea",
        COMMON_OBJ"needle",
	}) );
	set("greeting_msg", ({
	"������..����Ҫ��ʲô..\n",
	"С�����ǰ�����, ���������¶���..\n",
	"���..���˵��ز��..\n",
	}));
	setup();
}

int accept_object(object who, object ob)
{      
	string *secret=
	({" �Ǻ�..�Ǹ�����ô�Ĵ������˵�ӵ���ɽȥ��..\n",
	  " ��..���Ͽ������Ү..��ȻҪ����ͷ��..\n",
	  " ���ϰ����Ҫ��Ů����Ү..\n",
	  " ��ͷ������ Wade..������Ī��!\n",
	  " ������������������������..���ǲ�Т�Ӱ�..\n",
	  " ��˵�ɽ�������������!\n",
	  " ��˵�������������ֻ������ƦҲ���ò�����Ү..\n",
	  " �ֿڵ��Ǹ����ֺ���ÿ�ζ��ڴ��������ץ���Ǿ��Ǵ��, Ҳ��֪�����Ǽ�..\n",
	});
	if( ob->value() > 100 )
        {   
          command("say �ٺ�.."+RANK_D->query_respect(ob)+"�����ϵ�..\n");
          command("say �������ͨ��������������..\n");
	  command("whisper "+who->query("id")+secret[random(sizeof(secret))]);
	}												
        else
          command("say ��Ҳ̫�Ʋ��������ͨ�ˡ�\n");
       	return 1;
}       								
