// chfn.c

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	object link;

	if( link = me->link() ) {
		write("���� Email address [" + link->query("email") + "]: ");
		input_to("get_email", link);
		return 1;
	}
	return 0;
}

void get_email(string new_email, object link)
{
	if( new_email != "" )
		link->set("email", new_email);

	write("�������ҽ���: (fingerʱ��ʾ)\n");
	link->body()->edit((: call_other, __FILE__, "get_profile", link :));
}

void get_profile(object link, string str)
{
	link->set("profile", str);
	write("����ǩ����ʽ: (postʱ��)\n");
	link->body()->edit((: call_other, __FILE__, "get_signature", link :));
}

void get_signature(object link, string str)
{
	if( strlen(str) > 400 )
		write("ǩ����ʽ̫�����������趨��\n");
	else
		link->set("signature", str);
	write("��ǵ��� save �������������޸ġ�\n");
}

int help(object me)
{
write(@HELP
ָ���ʽ : chfn

��; : �����޸� email address , �༭���ҽ���(finger ʱ����)
       ��ǩ��(post ʱ��)��
HELP
     );
     return 1;
}
