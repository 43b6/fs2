 
 
int test_limit()
{
	return 0;
}
int test_kill_limit(object ob)
{
	if(ob->query("id")!=this_object()->query_temp("kill_man"))
	{
		command("say ���ǲ�����׽���İ� ?\n");
		return 0;
	}
	return 1;
}
