//  guard1-10 make by pokai

inherit NPC;

void create()
{
	set_name("�ؿ�����",({"guard"}));
        set("gender", "����");
	set("age",500);
        set("long","
    һֻ��ò���Ĺ����������������Ǹ����������ģ������������һ�������
����������Ǯ�����ѵ�...... ��������������ͨ��(pass)������ˡ�\n");

        set("chat_chance", 1);
        set("chat_msg",({
        "�ؿ������ùŹֵ�����ȵ������㿴ʲô������С�����ӱ��㣡��\n",
 	"�ؿ�������б�����㣬¶��̰����Ц�ݡ�\n",
        }));

        set("inquiry", ([
            "pass" : "û��˵����¸(bribe)�����ѵ�Ҫ���ӽ��㣿\n",
        ]));

	setup();
}

int accept_fight(object me)
{
        command("say ����ʦ�֣�ȥȥȥ....�������Ӷ���⣡\n");
        return 0;
}
