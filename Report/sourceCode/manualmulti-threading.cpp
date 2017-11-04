auto num_threads = thread::hardware_concurrency();
vector<thread> threads;
for (unsigned int t = 0; t < num_threads; ++t)
{
    threads.push_back(thread(forLoopAlgorithm, ..., /*variables*/, ...));
}
for (auto &t : threads)
    t.join();