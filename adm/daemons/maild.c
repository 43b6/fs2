// maild.c

void create()
{
  seteuid(ROOT_UID);
}

varargs void send_mail(string rcvr, string mail, mixed flag)
{
  object ob;

  ob = new (LOGIN_OB);
  ob->set("id", rcvr);
 
  if( !ob->restore() ) {
    write("û�������ҡ�\n");
    return ;
  }

  if( !mail || !flag )
    ob->set("new_mail", 1);
  else ob->set(mail, flag);

    ob->set("new_mail",1);
       CMAIL_D->add_mail(rcvr);
    printf("�ļ��˵�Ӣ��ID:%s\n",ob->query("id"));
  ob->save();
  write ("�żĳ�ȥ��.\n");
}
