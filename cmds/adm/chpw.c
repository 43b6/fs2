//������������ָ��by bss
inherit F_CLEAN_UP;

private void check1(string str,object me,object ob);

void create()
{
        seteuid(getuid());
}
int main(object me, string arg)
{
        string name;
        object ob;

        if( !arg || arg=="" )
                return notify_fail("ָ���ʽ��chpw ���id \n");

        name=arg;
        ob = new(LOGIN_OB);
        ob->set("id",arg);
        if(!ob->restore())
        {
                write("û�����ʹ����!!!\n");
                destruct(ob);
                return 1;
        }
//        if(wizhood(ob)=="(admin)"||wizhood(ob)=="(manager)")
//        {
//                printf("%s\n",SECURITY_D->get_status(name));
//                printf("��û�и���%s(%s)�����Ȩ��!!!\n",ob->query("name"),ob->query("id"));
//                return 1;
//        }
        printf("��ȷ��Ҫ����%s(%s)��������??(y/n)\n",ob->query("name"),ob->query("id"));
        input_to("check1",me,ob);
        return 1;
}
private void check1(string str,object me,object ob)
{
        string pass;

        if( str=="" ) {
        printf("��ȷ��Ҫ����%s(%s)��������??(y/n)\n",ob->query("name"),ob->query("id"));
        input_to("check1",me,ob);
        return ;
        }

        if( str[0]!='y' && str[0]!='Y' ) {
                write("������˸������롣\n");
                return ;
        }
        else {
                write("���ݹ涨,����ҵ����뽫����Ϊ12345 !!!\n");
                pass="12345";
                ob->set("password",crypt(pass,0));
                ob->save();
                log_file( "CHANGEPW", sprintf("%s(%s) ���� %s(%s) �������� (%s)\n",
                  me->query("name"),me->query("id"),
                  ob->query("name"), ob->query("id"),
                   ctime(time()) ) );
                write("����������!!!\n");
                destruct(ob);
                return ;
        }
}


int help()
{
        write(@TEXT
ָ���ʽ��chpw ���id

������Ϊ������Щ��һ����������,���Բ����ָ��
ָ�����ڶ�����ҵ����뽫����Ϊ12345....

TEXT
        );
        return 1;
}
