		/* Enter your code here. */
        try
        {
            cout<<Server::compute(A,B)<<endl;
        }
         catch (bad_alloc) {
                cout << "Not enough memory" << endl;
        }
        catch (exception &e) {
            cout << "Exception: "<< e.what() << endl;
        }
        catch (int) {
            cout << "Other Exception" << endl;
        }